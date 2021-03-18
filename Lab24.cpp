#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

class linked_list
{
    private:
        node* head, * tail;

    public:

        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

        /* Function to add node to the linked list */
        void add_node(int n)
        {
            node* tmp = new node;
            tmp->data = n;
            tmp->next = NULL;

            if (head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
        }

        /* Function to get the head pointer of the linked list */
        node* gethead()
        {
            return head;
        }

        /* Function to reverse the linked list */
        void reverse()
        {
            // TODO: Implement the reverse function. 
            // In this function, you need to reverse the link list. 
            // E.g. 
            // If the original linked list is 1, 2, 3, 4,
            // the reversed linked list should be 4, 3, 2, 1.
			// 50 points
        }
};

/* Function to print the linked list*/
static void display(node* head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data << ' ';
        display(head->next);
    }
}

/* Function to concatenate two linked lists */
static void concatenate(node* a, node* b)
{
    // TODO: Implement the concatenate function. 
    // a and b are head pointers of two different linked lists A and B.
    // This function adds List B to the end of List A.
    // The nodes added to the List A must be copies of the nodes in List B.
    // The lists may be empty or non-empty. 
    // So you also need to consider the empty situation.
    // List B should be unchanged by the function.
	// 50 points
}



int main()
{
    linked_list A;
    A.add_node(1);
    A.add_node(2);
    A.add_node(3);
    A.add_node(4);
    
    linked_list B;
    B.add_node(5);
    B.add_node(6);
    B.add_node(7);
    B.add_node(8);

    cout << "Original A : ";
    display(A.gethead());
    cout << endl;

    cout << "Original B : ";
    display(B.gethead());
    cout << endl;

    concatenate(A.gethead(), B.gethead());
    cout << "A after concatenation: ";
    display(A.gethead());
    cout << endl;

    cout << "B after concatenation: ";
    display(B.gethead());
    cout << endl;

    A.reverse();
    cout << "A after reverse: ";
    display(A.gethead());
    cout << endl;
    return 0;
}