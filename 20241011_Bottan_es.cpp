#include <iostream>
#include "bst_lib.h"

using namespace std;

int main() {
    Node* Root = new Node(49);

/*

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Inserire un nuovo nodo (Metodo Ricorsivo)" << endl;     //DONE
        cout << "2. Inserire un nuovo nodo (Metodo Iterativo)" << endl;     //DONE
        cout << "3. Cercare un nodo (Metodo Ricorsivo)" << endl;            //DONE
        cout << "4. Cercare un nodo (Metodo Iterativo)" << endl;            //DONE
        cout << "5. Cancellare un nodo" << endl;                            //DONE
        cout << "6. Visita dell'albero (InOrder)" << endl;                  //DONE
        cout << "7. Visita dell'albero (PreOrder)" << endl;                 //DONE
        cout << "8. Visita dell'albero (PostOrder)" << endl;                //DONE
        cout << "9. Calcolo altezza (Metodo Ricorsivo)" << endl;            //DONE
        cout << "11. Verifica che sia un BST" << endl;                      //TO DO
        cout << "0. Esci" << endl;
        cout << "Seleziona un'opzione: ";
        cin >> Selector;

        if (Selector == 1) {
            int valore;
            cout << "Inserisci il valore da inserire: ";
            cin >> valore;
            Root = RicorsiveInsert(Root, valore); 
            cout << "Nodo " << valore << " inserito con successo!" << endl;

        } else if (Selector == 2) {
            int valore;
            cout << "Inserisci il valore da inserire: ";
            cin >> valore;
            Root = IterativeInsert(Root, valore);  
            cout << "Nodo " << valore << " inserito con successo!" << endl;

        } else if (Selector == 3) {
            int valore;
            cout << "Inserisci il valore da cercare: ";
            cin >> valore;
            Node* check = RicorsiveSearch(Root, valore);  
            if (check == nullptr) {
                cout << "Il numero " << valore << " non esiste nell'albero." << endl;
            } else {
                cout << "Trovato: " << check->valore << endl;
            }

        } else if (Selector == 4) {
            int valore;
            cout << "Inserisci il valore da cercare: ";
            cin >> valore;
            Node* check = IterativeSearch(Root, valore);  
            if (check == nullptr) {
                cout << "Il numero " << valore << " non esiste nell'albero." << endl;
            } else {
                cout << "Trovato: " << check->valore << endl;
            }

        } else if (Selector == 5) {
            int valore;
            bool DeleteCheck{false};
            cout << "Inserisci il valore del nodo da cancellare: ";
            cin >> valore;
            DeleteCheck = DeleteNode(Root, valore);
            if (DeleteCheck==true)
            {
                cout << "Nodo cancellato con successo!" << endl;
            }else{
                cout << "Errore durante la cancellazione! :( " << endl;
            }
            DeleteCheck=false;

        } else if (Selector == 6) {
            cout << "Visita in-order dell'albero: ";
            InOrder(Root);  
            cout << endl;

        } else if (Selector == 7) {
            cout << "Visita pre-order dell'albero: ";
            PreOrder(Root);  
            cout << endl;

        } else if (Selector == 8) {
            cout << "Visita post-order dell'albero: ";
            PostOrder(Root);  
            cout << endl;

        } else if (Selector == 9) {
            cout << "Altezza: " << RecursiveHeight(Root) << endl;

        }  else if (Selector == 11) {                 
            if (IsBST(Root)) {
                cout << "L'albero è un BST." << endl;          
            } else {
                cout << "L'albero NON è un BST." << endl;
            }
        }

    } while (Selector != 0);
*/
    return 0;
}
