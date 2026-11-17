#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

void tambah (Node* root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
    }

    // inputan lebih besar dari data root
    if (data > root->data) {
        tambah(root->kiri, data);
    }

    // inputan lebih kecil dari data root
    if (data < root->data) {
        tambah(root->kanan, data);
    }
}

int main () {
    Node* root = NULL;
    int angka;

    cout << "Masukkan angka (-1=stop) : ";
    cin >> angka;

    while (angka != -1) {
        tambah(root, angka);
        cin >> angka;
    }

     // Menampilkan output
    cout << "Root : " << root->data << endl;
    cout << "Kiri Root : " << root->kiri->data << endl;
    cout << "Kanan Root : " << root->kanan->data << endl;

    return 0;
}