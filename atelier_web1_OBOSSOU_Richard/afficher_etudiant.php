<?php
$dsn = "mysql:unix_socket=/opt/lampp/var/mysql/mysql.sock;dbname=liste_etudiant;charset=utf8";
$pdo = new PDO($dsn, "root", "");
$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // ON UTILISE DES DOLLARS NOMMÉS POUR ÊTRE SÛR
    $sql = "INSERT INTO liste_etudiant (nom, prenom, email, telephone) VALUES (:nom, :prenom, :email, :tel)";
    $stmt = $pdo->prepare($sql);
    
    $stmt->execute([
        ':nom'    => $_POST['nom'],
        ':prenom' => $_POST['prenom'],
        ':email'  => $_POST['email'],
        ':tel'    => $_POST['telephone']
    ]);

    echo "<h1 style='color:green;'>Succès ! L'étudiant est enregistré.</h1>";
}
?>