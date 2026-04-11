async function chargerContacts() {
    const tableBody = document.getElementById('etudiantTableBody');
    try {
        const response = await fetch('afficher_etudiant.php');
        const contacts = await response.json();
        
        tableBody.innerHTML = '';

        contacts.forEach(etudiant => {
            const row = `
                <tr>
                    <td>${contact.nom}</td>
                    <td>${contact.prenom}</td>
                    <td>${contact.email}</td>
                    <td>${contact.telephone}</td>
                     <td>${contact.filiere}</td>
                    <td>
                        <button onclick="supprimerContact(${etudiant.id})" style="color:red">Supprimer</button>
                    </td>
                </tr>`;
            tableBody.innerHTML += row;
        });
    } catch (error) {
        console.error("Erreur de chargement :", error);
    }
}

window.onload = chargeretudiant;

async function supprimeretudiant(id) {
    if (confirm("Supprimer cet etudiant ?")) {
        await fetch(`supprimer_etudiant.php?id=${id}`);
        chargeretudiant();
    }
}