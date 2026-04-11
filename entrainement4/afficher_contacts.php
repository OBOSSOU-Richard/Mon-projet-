<?php
require_once 'config.php';

try {
    $stmt = $pdo->query("SELECT * FROM contacts ORDER BY id DESC");
    $contacts = $stmt->fetchAll(PDO::FETCH_ASSOC);
    echo json_encode($contacts);
} catch (Exception $e) {
    echo json_encode([]);
}
?>
