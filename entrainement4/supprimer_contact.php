<?php
require_once 'config.php';

// On vérifie si l'ID est bien présent dans l'URL
if (isset($_GET['id'])) {
    $id = $_GET['id'];

    try {
        // Préparation de la requête de suppression
        $sql = "DELETE FROM contacts WHERE id = :id";
        $stmt = $pdo->prepare($sql);
        $stmt->execute(['id' => $id]);

        // On renvoie un message de succès
        echo json_encode(["success" => true]);
    } catch (PDOException $e) {
        echo json_encode(["error" => $e->getMessage()]);
    }
} else {
    echo json_encode(["error" => "ID manquant"]);
}
?>