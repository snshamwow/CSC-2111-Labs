#include<iostream>
#include<string>

using namespace std;

class node
{
public:
	node(int d, node* nxt)
		: data(d), next(nxt) {}
	int data;
	node* next;
};

node* insertAtHead(int number, node* head);

node* insertAtTail(int number, node* head);

node* insertAtIndex(int number, int index, node* head);

node* replaceValueAtIndex(int number, int index, node* head);

int frequency(int number, node* current);

bool isEmpty(node* head);

void printList(node* current);

void showMenu();

int main()
{
	node* head = NULL;
	int menuChoice, number, index;

	while (true)
	{
		try
		{
			showMenu();
			cin >> menuChoice;

			switch (menuChoice)
			{
			case 1:
				cout << "Enter an integer to insert: ";
				cin >> number;
				head = insertAtHead(number, head);
				break;
			case 2:
				cout << "Enter an integer to insert: ";
				cin >> number;
				head = insertAtTail(number, head);
				break;

			case 3:
				if (isEmpty(head))
				{
					cout << "The list is empty." << endl;
				}
				else {
					cout << "Enter an integer to insert: ";
					cin >> number;
					cout << "Enter an index to insert the integer at: ";
					cin >> index;
					head = insertAtIndex(number, index, head);
				}
				break;
			case 4:
				if (isEmpty(head))
				{
					cout << "The list is empty." << endl;
				}
				else {
					cout << "Enter an integer: ";
					cin >> number;
					cout << "Enter an index: ";
					cin >> index;
					head = replaceValueAtIndex(number, index, head);
				}
				break;
			case 5:
				if (isEmpty(head))
				{
					cout << "The list is empty." << endl;
				}
				else {
					cout << "Enter an integer to count: ";
					cin >> number;
					cout << "frequency = " << frequency(number, head) << endl;

				}
				break;
			case 6:
				if (isEmpty(head))
					cout << "The list is empty." << endl;
				else
					printList(head);
				cout << endl;
				break;
			case 7:
				cout << "The list " << (isEmpty(head) ? "is" : "is not") << " empty.\n";
				break;
			case -1:
				return 0;
			default:
				cout << menuChoice << " is an invalid menu choice. Try again.\n";
			}
		}
		catch (invalid_argument ia)
		{
			cout << ia.what() << endl;
			cout << "Please enter a valid integer." << endl;
		}
	}
}

void showMenu() {
	cout << endl;
	cout << "1. Insert at head.\n";
	cout << "2. Insert at tail.\n";
	cout << "3. Insert at a specific index.\n";
	cout << "4. Replace the value at a specific index.\n";
	cout << "5. Count the frequency of a value in the list.\n";
	cout << "6. Print list.\n";
	cout << "7. Check if the list is empty.\n";
	cout << "-1. Quit\n";
	cout << "Please enter a choice: ";
}

bool isEmpty(node* head)
{
	return (head == NULL);
}

node* insertAtHead(int number, node* head)
{
	node* newHead = new node(number, head);
	return newHead;
}

node* insertAtTail(int number, node* head)
{
	// This function is provided for you, in order
	// to show the logic behind iterating through a list
	// and inserting into it.

	// This function inserts a new node containing the
	// data value passed in the parameter at the end
	// of a linked list.  The list's head 
	// is returned.
	node* current = head;

	//if the current node does not exist, insert it at the head
	if (current == NULL)
		return insertAtHead(number, current);

	//iterate the current node until the the end of the list
	while (current->next != NULL)
		current = current->next;

	//make the current node (the last node) point to a new node with the passed data value
	current->next = new node(number, NULL);
	return head;
}

node* insertAtIndex(int number, int index, node* head)
{

	// Handles the following cases:
	// 1. If the the index is 0, insert a new node at the head and return from the function.
	// 2. If the index is not 0, iterate until the nth index and insert a new node.
	// If the index exceeds the number of elements in the list, insert at the end.

	//Case 1
	if (index <= 0) {
		//insert at the head of the list
		return insertAtHead(number, head);
	}

	//Case 2
	//The node that will be inserted into the list. 
	//Its "next" pointer will need to be modified when the node at the correct index is found.
	node* nodeToInsert = new node(number, NULL);
	// This node represents the current node that is being iterated to.
	// This node will eventually be the node after the nodeToInsert.
	node* current = head;
	// This node represents the node just before current.
	// This node will eventually be the node before the nodeToInsert.
	node* previous = NULL;
	// Iterator
	int i = 0;

	// Use a while loop that iterates up to the given index.
	// During the while loop, update previous and current so traverse through the list.
	// If the index is greater than the number of elements, break from the while loop.
	while (i < index) {
		previous = current;
		current = current->next;

		if (current == NULL) {
			break;
		}

		i++;
	}

	// Update the nodes that nodeToInsert and previous are pointing to.
	// If the while loop iteration was done correctly, current should represent the node after nodeToInsert.
	// previous should represent the node before nodeToInsert.
	nodeToInsert->next = current;
	previous->next = nodeToInsert;

	return head;
}

node* replaceValueAtIndex(int number, int index, node* head)
{
	// TODO: Implement the replaceValueAtIndex fucntion.
	// This function iterates to the node at the given index,
	// and it replaces the node's data with the number
	// passed in the parameter (50 points).
	// If the index does not exist in the list, 
	// print that the index does not exist and
	// return from function without replacing any values.

	if (index == 0) {
		head->data = number;
		return head;
	}
	int i = 0;
	node* current = head;
	//iterate to the required index
	while (i < index) {
		current = current->next;
		// if the index doesnot exist i.e. current is null before reaching the index
		if (current == NULL) {
			cout << "The index " << index << " doesn't exist." << endl;
			return head;
		}
		i++;
	}
	current->data = number;
	cout << "Changed.";
	return head;
}

int frequency(int number, node* head)
{
	// TODO:  Implement the frequency function.
	// This function counts the number of times 
	// the data value passed in the parameter
	// occurs in the list and returns the count (50 points).
	if (head == NULL) {
		return 0;
	}
	node* current = head;
	int i = 0;

	while (current != NULL) {
		if (current->data == number)
			i++;
		current = current->next;
	}

	return i;
}


void printList(node* current)
{
	if (current == NULL)
		return;

	cout << current->data << " ";
	printList(current->next);
}