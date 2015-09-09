#include <stdio.h>
#include <stdlib.h>

/* 
 Foward Declaration 
*/

/* Classification*/
typedef enum status_t Status;
typedef enum category_t Category;
typedef struct address_t Address;
/* Main Structures*/
typedef struct review_t Review;
typedef struct user_t User;
typedef struct business_t Business;


/*
 Main Data Structures
*/

struct account_t{
	void *Account;
	char *userName;
	char *password;
}


struct address_t{
	char *streetName;
	char *suburb;
	char *state;
	int postcode;
};

enum status_t{
	negative = (-1), 
	netural, 
	positive, 
};



enum category_t{
MEXICAN;
INDIAN;
CHINESE;
AUSSIE;
	/* list of types of  businesses.*/
};


struct review_t{
	char *business_name;
	char *review;
	char *username;
	Status status;
}; 

struct user_t{
	char* name;
	char* username;
	char* email;
	char* rating;
	char* identifier; (unique)
	char* review; (all the reviews the customer has given)
};

struct business_t{
	int id;
	char *name;
	char *number;
	char *website;
	char *email;
	char *desc;
	Address address;
	Category category;

};

/*FUNCTION PROTOTYPES*/
int review();
