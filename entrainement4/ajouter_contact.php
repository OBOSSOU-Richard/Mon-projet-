<?php
// 1. Paramètres de connexion à la base de données
$host = 'localhost';
$dbname = 'gestion_contacts';
$user = 'root'; // Par défaut sur XAMPP/WAMP
$pass = '';     // Vide par défaut sur XAMPP/WAMP

try {
    // 2. Connexion à MySQL via PDO
    $pdo = new PDO("mysql:host=$host;dbname=$dbname;charset=utf8", $user, $pass);
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    // 3. Vérification que les données ont bien été envoyées
    if (isset($_POST['nom'], $_POST['email'], $_POST['telephone'])) {
        
        // 4. Préparation de la requête SQL (Sécurité maximale)
        $sql = "INSERT INTO contacts (nom, email, telephone) VALUES (:nom, :email, :tel)";
        $stmt = $pdo->prepare($sql);

        // 5. Exécution de la requête avec les données du formulaire
        $success = $stmt->execute([
            ':nom'   => $_POST['nom'],
            ':email' => $_POST['email'],
            ':tel'   => $_POST['telephone']
        ]);

        if ($success) {
            // Redirection vers la page d'accueil après l'enregistrement
            header("Location: index.html?status=success");
            exit();
        }
    }
} catch (PDOException $e) {
    // En cas d'erreur (ex: email déjà existant)
    die("Erreur lors de l'enregistrement : " . $e->getMessage());
}
?>