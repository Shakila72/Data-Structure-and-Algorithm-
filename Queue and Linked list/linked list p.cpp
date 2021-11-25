#include<bits/stdc++.h> 
using namespace std; 

class Telephone 
{ 
        public: 
        long pno; 
        char name[60], address[200];
        char email[150];
        Telephone *left; 
        Telephone *right; 
        int height; 
}; 

int max(int a, int b) //to return the maximum value, mainly used for height
{ 
        return (a > b)? a : b; 
} 
int height(Telephone *N) //to return the height of a given tree 
{ 
        if (N == NULL) 
                return 0; 
        return N->height; 
} 

//initialize a new node
Telephone *newNo(long phone, char nam[60], char addr[200], char ema[150]) 
{ 
        Telephone* node = new Telephone(); 
        node->pno = phone;
    strcpy(node->name , nam);
        strcpy(node->address , addr);
        strcpy(node->email , ema);
        node->left = NULL; 
        node->right = NULL; 
        node->height = 1; 
        return(node); 
} 
 
//perform the right rotation
Telephone *rightRotate(Telephone *y) 
{ 
        Telephone *x = y->left; 
        Telephone *T2 = x->right; 

        x->right = y; 
        y->left = T2; 

        y->height = max(height(y->left), 
                                        height(y->right)) + 1; 
        x->height = max(height(x->left), 
                                        height(x->right)) + 1; 
        return x; 
} 

//perform the left rotation
Telephone *leftRotate(Telephone *x) 
{ 
        Telephone *y = x->right; 
        Telephone *T2 = y->left; 

        y->left = x; 
        x->right = T2; 

        x->height = max(height(x->left),   
                                        height(x->right)) + 1; 
        y->height = max(height(y->left), 
                                        height(y->right)) + 1; 
        return y; 
} 

//return the balance so as to check if tree is balanced or not
int getBalance(Telephone *N) 
{ 
        if (N == NULL) 
                return 0; 
        return height(N->left) - height(N->right); 
} 

//to insert a new node
 Telephone* insert(Telephone* node, long phone, char nam[60], char addr[200], char ema[150]) 
{ 
        if (node == NULL) 
                return(newNo(phone, nam, addr, ema)); 

        if (phone < node->pno) 
                node->left = insert(node->left, phone, nam, addr, ema); 
        else if (phone > node->pno) 
                node->right = insert(node->right, phone, nam, addr, ema); 
        else //same phone number is not allowed
                return node; 

        node->height = 1 + max(height(node->left), 
                                                height(node->right)); 

        int balance = getBalance(node); 

// If this node becomes unbalanced, then we need to check the following cases 
        if (balance > 1 && phone < node->left->pno) 
                return rightRotate(node); 

        if (balance < -1 && phone > node->right->pno) 
                return leftRotate(node); 

        if (balance > 1 && phone > node->left->pno) 
        { 
                node->left = leftRotate(node->left); 
                return rightRotate(node); 
        } 

        if (balance < -1 && phone < node->right->pno) 
        { 
                node->right = rightRotate(node->right); 
                return leftRotate(node); 
        } 
        return node; 
} 

Telephone * minValueNode(Telephone* node) //To find the node with the least value in a tree/subtree
{ 
        Telephone* current = node; 
        while (current->left != NULL) 
                current = current->left;
        return current; 
} 

Telephone* deleteNode(Telephone* root, long pno) //To delete a number
{ 
        if (root == NULL) 
                return root; 
  
        if ( pno < root->pno ) 
                root->left = deleteNode(root->left, pno); 

        else if( pno> root->pno ) 
                root->right = deleteNode(root->right, pno); 

        //Found node to be deleted
        else
        { 
                // node with only one child or no child 
                if( (root->left == NULL) || 
                        (root->right == NULL) ) 
                { 
                        Telephone *temp = root->left ? 
                                                root->left : 
                                                root->right; 

                        // No child case 
                        if (temp == NULL) 
                        { 
                                temp = root; 
                                root = NULL; 
                        } 
                        else // One child case 
                        *root = *temp;  
                        free(temp); 
                } 
                else
                { 
                        Telephone* temp = minValueNode(root->right); 

                        root->pno = temp->pno;
                strcpy(root->name, temp->name);       
                        strcpy(root->address, temp->address);
                strcpy(root->email, temp->email);
                        root->right = deleteNode(root->right, temp->pno); 
                } 
        } 

        if (root == NULL) 
        return root; 

        root->height = 1 + max(height(root->left), 
                                                height(root->right)); 


        int balance = getBalance(root); 

        // If this node becomes unbalanced, then there are 4 cases 

        if (balance > 1 && 
                getBalance(root->left) >= 0) 
                return rightRotate(root); 

        if (balance > 1 && 
                getBalance(root->left) < 0) 
        { 
                root->left = leftRotate(root->left); 
                return rightRotate(root); 
        } 

        if (balance < -1 && 
                getBalance(root->right) <= 0) 
                return leftRotate(root); 
 
        if (balance < -1 && 
                getBalance(root->right) > 0) 
        { 
                root->right = rightRotate(root->right); 
                return leftRotate(root); 
        } 

        return root; 
} 

// Displaying the phone numbers: pre, post, in
void preOrder(Telephone *root) 
{ 
        if(root != NULL) 
        { 
cout << root->pno << " "<<root->name<<" ";
  cout<<root->address<<" "<<root->email<<"\n"; 
                preOrder(root->left); 
                preOrder(root->right); 
        } 
} 

void postOrder(Telephone* root) 
{ 
    if (root == NULL) 
        return; 
    postOrder(root->left); 
    postOrder(root->right); 
    cout << root->pno << " "<<root->name<<" ";
  cout<<root->address<<" "<<root->email<<"\n"; 
} 
  
void inorder(Telephone* root) 
{ 
    if (root == NULL) 
        return; 
  
    inorder(root->left); 
    cout << root->pno << " "<<root->name<<" ";
  cout<<root->address<<" "<<root->email<<"\n"; 
    inorder(root->right); 
} 

//Searching the phone number using: Owner's name/address/email
void searchName(Telephone *root, char nam[100], int k=0) 
{ 
        if(root != NULL && k!=1) 
        { 
        if(strcmp(root->name, nam)==0)
        {
          k=1;
          cout << root->pno << " "<<root->name<<" ";
                  cout<<root->address<<" "<<root->email<<"\n"; 
        }
        else
        k=0;
                searchName(root->left, nam, k); 
                searchName(root->right, nam,k); 
        } 
} 

void searchAddress(Telephone *root, char addr[100], int k=0) 
{ 
        if(root != NULL && k!=1) 
        { 
        if(strcmp(root->address, addr)==0)
        {
          k=1;
          cout << root->pno << " "<<root->name<<" ";
                  cout<<root->address<<" "<<root->email<<"\n"; 
        }
        else
        k=0;
                searchAddress(root->left, addr, k); 
                searchAddress(root->right, addr,k); 
        } 
} 

void searchEmail(Telephone *root, char ema[100], int k=0) 
{ 
        if(root != NULL && k!=1) 
        { 
        if(strcmp(root->email, ema)==0)
        {
          k=1;
          cout << root->pno << " "<<root->name<<" ";
                  cout<<root->address<<" "<<root->email<<"\n"; 
        }
        else
        k=0;
                searchEmail(root->left, ema, k); 
                searchEmail(root->right, ema,k); 
        } 
} 

int main() 
{ 
        Telephone *root = NULL; 
        long phone; 
        char name[100];
        char address[200];
        char email[150];
        char ans; 
      
      
        
        	do{
        		cout<<"Enter Phone Number, Name, Address and Email:";
        cin>>phone>>name>>address>>email;
        root = insert(root, phone, name, address, email);
        cout << "Preorder traversal of the tree: \n";
        preOrder(root);
        cout << "Postorder traversal of the tree: \n";
        postOrder(root);
        cout << "Inorder traversal of the tree: \n";
        inorder(root);
        
        cout<<"Do you want to add more numbers:";
        cin>>ans;
			}while(ans=='y' || ans=='Y');
        
    
  
        cout<<"Do you want to delete numbers:";
    cin>>ans;
        while(ans=='y' || ans=='Y')
      {
        cout<<"Enter Phone Number to be deleted:";
        cin>>phone;
        root = deleteNode(root, phone);
        cout<<"Do you want to delete more numbers:";
        cin>>ans;
      }
        
        int ch;
        cout<<"Do you want to search some number:";
    cin>>ans;
        if(ans=='y' || ans=='Y')
      do{
        cout<<"How do you want to search?\n 1. By name\n";
      cout<<"2. By address\n 3. By email\n Enter choice:";
        cin>>ch;
        switch(ch)
        {
          case 1: cout<<"Enter Name:";
                  cin>>name;
                  searchName(root, name);
                  break;
           
          case 2: cout<<"Enter Address:";
                  cin>>address;
                  searchAddress(root, address);
                  break;
            
          case 3: cout<<"Enter Email:";
                  cin>>email;
                  searchEmail(root, email);
                  break;
        }
      cout<<"Do you want to search more numbers:";
    cin>>ans;
      }while(ans=='y' || ans=='Y');
        return 0; 
}
