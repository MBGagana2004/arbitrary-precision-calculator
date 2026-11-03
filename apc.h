#ifndef APC_H // if not define the APC_H 
#define APC_H //then define it 

#include <stdio.h>  // Include the standard input/output library for using printf and other I/O functions
#include <string.h> // Include the string library for using string manipulation functions like strlen and strchr
#include <stdlib.h> // Include the standard library for using functions like malloc and exit
#include <ctype.h>  // Include the ctype library for using character handling functions like isdigit

#define SUCCESS		0  // Define constants for success 
#define FAILURE		-1 // Define constants for failure

#define SAME		1 // Define constants for same length of lists
#define OPERAND1	2 // Define constants for operand1 is greater than operand2
#define OPERAND2	3 // Define constants for operand2 is greater than operand1

/*colors code*/
#define RESET   "\033[0m"// Reset color code to default
#define RED     "\033[31m"// invalide operand color code for error message
#define GREEN   "\033[32m"//Green color code for operand display
#define YELLOW  "\033[33m"// Yellow color code for operator display
#define BLUE    "\033[34m"// Blue color code for result display
#define MAGENTA "\033[35m"// Magenta color code for intermediate result display
#define CYAN    "\033[36m"// Cyan color code for debugging display

// Define a structure for a node in the linked list
typedef struct node  
{
    struct node *prev; // Pointer to the previous node in the list
    int data;         // Data stored in the node (in this case, a single digit)
    struct node *next; // Pointer to the next node in the list
}node;

// Function prototypes for the operations and utility functions
void addition(node *tail1, node *tail2, node **headR, node **tailR); // Function prototype for addition
void subtraction(node *tail1, node *tail2, node **headR, node **tailR); // Function prototype for subtraction
void multiplication(node *tail1, node *tail2, node **headR, node **tailR); // Function prototype for multiplication
void division(node *head1, node *head_OPR2, node *tail_OPR2, node **headR, node **tailR); // Function prototype for division
int cla_validation(int argc, char *argv[]);  // Function prototype for command line argument validation
void create_list(char *opr, node **head, node **tail);  // Function prototype for creating a linked list from a string of digits

int insert_first(node **head, node **tail, int data); // Function prototype for inserting a node at the beginning of the list
int insert_last(node **head, node **tail, int data); // Function prototype for inserting a node at the end of the list
int delete_list(node **head, node **tail); // Function prototype for deleting the entire list and freeing the memory allocated for it
void print_list(node *head); // Function prototype for printing the elements of the list

int compare_list(node *head1, node *head2); // Function prototype for comparing two lists
int list_len(node *head); // Function prototype for calculating the length of the list
void remove_pre_zeros(node **head); // Function prototype for removing leading zeros from the list

#endif
