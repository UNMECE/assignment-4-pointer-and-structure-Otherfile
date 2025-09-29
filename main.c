#include<stdio.h>
#include<stdlib.h>
#include"item.h"
#include<string.h>



void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index){

	item_list[index].price = (double *) malloc(sizeof(double));
	item_list[index].sku = (char *) malloc(sizeof(char)*(strlen(sku)+1);
	item_list[index].category = (char *) malloc(sizeof(char)*(strlen(category)+1);
	item_list[index].name = (char *) malloc(sizeof(char)*(strlen(name)+1);

	item_list[index].price = price;
	item_list[index].sku = sku;
	item_list[index].category = category;
	item_list[index].name = name;


}
void free_items(Item *item_list, int size);
double average_price(Item *item_list, int size);
void print_items(Item *item_list, int size);


int main(){


	Item* item_list = (Item *) malloc(sizeof(Item) * 5);

	add_item(item_list, 5.00, 100200300, "Cereal\0", "Corn Flakes\0", 0);	
	
	printf("%d\n%s\n%s\n%s\n", item_list[0].price, item_list[0].sku, item_list[index].category, item_list[index].name);

	return 0;
}


