#include <stdio.h>
#include <math.h>
#include "kappalib.h"


#define SELF struct Address *self
typedef struct Address {
char* street;
int number;
char* city;

void (*setAddress)(self, char* s, int n, char* c);

void (*printAddress)(self);
} Address;

void setAddress(self, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
} 

void printAddress(self) {
write(, , , ,"Address: %s %d, %s\n", self->street, self->number, self->city);
} 

const ctor_Address = { .setAddress=setAddress, .printAddress=printAddress };
#under SELF

#define SELF struct Person *self
typedef struct Person {
char* firstName, lastName;
char* email;
int phone;
Address address;

void (*setPerson)(self, char* fn, char* ln, char* email, int phone, Address addr);

void (*printPersonInfo)(self);
} Person;

void setPerson(self, char* fn, char* ln, char* email, int phone, Address addr) {
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;
} 

void printPersonInfo(self) {
write(, , , , ,"%s %s, email: %s phone: %d\n", self->firstName, self->lastName, self->email, self->phone);
self->address.printAddress(&(null));
} 

const ctor_Person = { .setPerson=setPerson, .printPersonInfo=printPersonInfo };
#under SELF

#define SELF struct Book *self
typedef struct Book {
char* title, isbn;
Person author;
int numOfCopies;
double price;

void (*setBook)(self, char* t, Person a, int numOfCopies, double price);

void (*printBook)(self);
} Book;

void setBook(self, char* t, Person a, int numOfCopies, double price) {
self->title = t;
self->author = a;
self->numOfCopies = numOfCopies;
self->price = price;
} 

void printBook(self) {
write(, ,"Title: %s\n", self->title);
writeStr(,"Author:");
self->author.printPersonInfo(&self->address);
write(, ,"Price:%f\n", self->price);
write(, ,"Number of available copies: %d\n", self->numOfCopies);
} 

const ctor_Book = { .setBook=setBook, .printBook=printBook };
#under SELF

#define SELF struct Order *self
typedef struct Order {
int orderNum;
Book book;
int quantity;
Address shippingAddress;
int delivered;

void (*setOrder)(self, int orNum, Book b, int q, Address sh, int del);

void (*printOrder)(self);
} Order;

void setOrder(self, int orNum, Book b, int q, Address sh, int del) {
self->orderNum = orNum;
self->book = b;
self->quantity = q;
self->shippingAddress = sh;
self->delivered = del;
} 

void printOrder(self) {
write(, ,"Order Num: %s\n", self->orderNum);
} 

const ctor_Order = { .setOrder=setOrder, .printOrder=printOrder };
#under SELF

#define SELF struct Bookstore *self
typedef struct Bookstore {
char* name;
Book listOfBooks[100];
int numOfBooks;
Order listOfOrders[100];
int numOfOrders;

void (*putOrder)(self, Order o);

void (*addBook)(self, Book b);

void (*printBookStoreBooks)(self);

double (*calculateTotalOrdersIncome)(self);
} Bookstore;

Hw> ªvoid putOrder(self, Order o) {
self->listOfOrders[self->numOfOrders] = o;
self->numOfOrders += 1;
} 

void addBook(self, Book b) {
self->listOfBooks[self->numOfBooks] = b;
self->numOfBooks += 1;
} 

void printBookStoreBooks(self) {
for (int i = 0; i < self->numOfBooks; i++) {
self->listOfBooks[i].printBook(&self->author);
}
} 

double calculateTotalOrdersIncome(self) {
double total; 
total = 0;
for (int i = 0; i < self->numOfOrders; i++) {
if (self->listOfOrders[i].self->delivered) {
 total = total + self->listOfOrders[i].self->quantity * self->listOfOrders[i].self->book.self->price;
}
}
return total;
} 

const ctor_Bookstore = { Xù«ª
.putOrder=putOrder, .addBook=addBook, .printBookStoreBooks=printBookStoreBooks, .calculateTotalOrdersIncome=calculateTotalOrdersIncome };
#under SELF
int orderId; 

Address createAddress(char* s, int n, char* c) {
Address a = ctor_Address; 
a.setAddress(&self->listOfOrders[i].self->book, , ,s, n, c);
return a;

}


Person createPerson(char* fn, char* ln, char* email, int phone, Address addr) {
Person p = ctor_Person; 
p.setPerson(&a, , , , ,fn, ln, email, phone, addr);
return p;

}


Book createBook(char* t, Person a, int numOfCopies, double price) {
Book b = ctor_Book; 
b.setBook(&p, , , ,t, a, numOfCopies, price);
return b;

}


Order createOrder(int orNum, Book b, int q, Address sh, int del) {
Order ord = ctor_Order; 
ord.setOrder(&b, , , , ,orNum, b, q, sh, del);
return ord;

}


Bookstore createBookstore(char* n) {
Bookstore bs = ctor_Bookstore; 
bs.name = n;
bs.numOfBooks = 0;
bs.numOfOrders = 0;
return bs;

}

int main(){
orderId = 0;
Address a, a1 = ctor_Address; 
a = createAddress(, , ,"Stadiou", 10, "Stadiou");
Person author = ctor_Person; 
author = createPerson(, , , , ,"Christos", "Papadimitriou", "cpap@gmail.com", 12345, a);
Book b = ctor_Book; 
b = createBook(, , , ,"Computation Theory", author, 34.3, 100);
Bookstore bs = ctor_Bookstore; 
bs = createBookstore(,"Papasotiriou");
bs.addBook(&bs,b);
a = createAddress(, , ,"Wall Street", 10, "NY");
author = createPerson(, , , , ,"Dennis", "Richie", "richie@gmail.com", 54321, a);
b = createBook(, , , ,"C Programming", author, 10.3, 100);
bs.addBook(&bs,b);
bs.printBookStoreBooks(&bs);
Order ord = ctor_Order; 
ord = createOrder(, , , , ,orderId, b, 2, a, 0);
orderId += 1;
bs.putOrder(&bs,ord);
write(, ,"Bookstore orders income: %.2f\n", bs.calculateTotalOrdersIncome(&bs));
}

