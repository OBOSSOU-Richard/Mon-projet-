async function chargerContacts() {
    const tableBody = document.getElementById('contactTableBody');
    try {
        const response = await fetch('afficher_contacts.php');
        const contacts = await response.json();
        
        tableBody.innerHTML = '';

        contacts.forEach(contact => {
            const row = `
                <tr>
                    <td>${contact.nom}</td>
                    <td>${contact.email}</td>
                    <td>${contact.telephone}</td>
                    <td>
                        <button onclick="supprimerContact(${contact.id})" style="color:red">Supprimer</button>
                    </td>
                </tr>`;
            tableBody.innerHTML += row;
        });
    } catch (error) {
        console.error("Erreur de chargement :", error);
    }
}

window.onload = chargerContacts;

async function supprimerContact(id) {
    if (confirm("Supprimer ce contact ?")) {
        await fetch(`supprimer_contact.php?id=${id}`);
        chargerContacts();
    }
}