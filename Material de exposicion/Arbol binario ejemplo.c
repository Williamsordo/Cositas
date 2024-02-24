#include <stdio.h>
#include <stdlib.h>

// Definici�n de la estructura para los nodos del �rbol
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

// Funci�n para crear un nuevo nodo
node* createNode(int data) {
    node* newNode = malloc(sizeof(node));
    if(newNode == NULL) {
        printf("Error creando un nuevo nodo.\n");
        exit(0);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Funci�n para insertar datos en el �rbol
node* insert(node* root, int data) {
    // Si el �rbol est� vac�o, asigna un nuevo nodo direcci�n
    if(root == NULL) return createNode(data);

    // Si los datos son menores que la ra�z, inserta a la izquierda
    if(data < root->data) root->left = insert(root->left, data);

    // Si los datos son mayores que la ra�z, inserta a la derecha
    else root->right = insert(root->right, data);

    return root;
}

int main() {
    node* root = NULL;
    root = insert(root, 5); // Insertamos el 5 como ra�z
    insert(root, 3);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    insert(root, 6);
    insert(root, 8);
    insert(root, 1);
    insert(root, 9);
    insert(root, 10);

    return 0;
}
