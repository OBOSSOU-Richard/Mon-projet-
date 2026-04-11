<?php
// 1. Définition des variables de connexion
$host = 'localhost';    // Serveur local (XAMPP/WAMP)
$db   = 'gestion_contacts';  // Le nom de ta base créé dans phpMyAdmin
$user = 'root';         // Utilisateur par défaut
$pass = '';             // Mot de passe par défaut (vide sur Windows)
$charset = 'utf8mb4';   // Pour bien gérer les accents et émojis

// 2. Configuration des options PDO
$options = [
    PDO::ATTR_ERRMODE            => PDO::ERRMODE_EXCEPTION, // Arrête le script en cas d'erreur SQL
    PDO::ATTR_DEFAULT_FETCH_MODE => PDO::FETCH_ASSOC,       // Retourne les données sous forme de tableau associatif
    PDO::ATTR_EMULATE_PREPARES   => false,                  // Utilise les vraies requêtes préparées (Sécurité ++)
];

$dsn = "mysql:host=$host;dbname=$db;charset=$charset";

try {
     // 3. Création de la connexion (L'objet $pdo devient ton "pont")
     $pdo = new PDO($dsn, $user, $pass, $options);
     // echo "Connexion réussie !"; // Décommenter pour tester
} catch (\PDOException $e) {
     // En cas d'erreur, on affiche le message et on coupe tout
     throw new \PDOException($e->getMessage(), (int)$e->getCode());
}
?>





