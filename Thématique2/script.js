const tableBody = document.getElementById('contactTableBody');
const form = document.getElementById('contactForm');

// Charger les contacts au démarrage
async function chargerContacts() {
    const res = await fetch('api/actions.php?action=lire');
    const contacts = await res.json();
    tableBody.innerHTML = '';
    
    contacts.forEach(c => {
        tableBody.innerHTML += `
            <tr>
                <td>${c.nom}</td>
                <td>${c.email}</td>
                <td>${c.telephone}</td>
                <td><button class="btn-delete" onclick="supprimerContact(${c.id})">Supprimer</button></td>
            </tr>`;
    });
}

// Ajouter un contact
form.onsubmit = async (e) => {
    e.preventDefault();
    const formData = new FormData(form);
    await fetch('api/actions.php?action=ajouter', { method: 'POST', body: formData });
    form.reset();
    chargerContacts();
};

// Supprimer un contact
async function supprimerContact(id) {
    if(confirm("Supprimer ce contact ?")) {
        await fetch(`api/actions.php?action=supprimer&id=${id}`);
        chargerContacts();
    }
}

chargerContacts();




