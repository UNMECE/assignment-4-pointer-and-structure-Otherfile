#include<stdio.h>
#include<stdlib.h>
#include"item.h"
#include<string.h>



void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index){

	item_list[index].sku = (char *) malloc(sizeof(char)*(strlen(sku)+1));
	item_list[index].category = (char *) malloc(sizeof(char)*(strlen(category)+1));
	item_list[index].name = (char *) malloc(sizeof(char)*(strlen(name)+1));

	item_list[index].price = price;
	strcpy(item_list[index].sku, sku);
	strcpy(item_list[index].category, category);
	strcpy(item_list[index].name, name);


}
void free_items(Item *item_list, int size){


	for (int i = 0; i < size; i++){


	free(item_list[i].sku);
	free(item_list[i].category);
	free(item_list[i].name);
	}

	free(item_list);

}
double average_price(Item *item_list, int size){


	double sum = 0;
	for (int i = 0; i < size; i++){
	
		sum += item_list[i].price;

	}

	return sum/size;
}
void print_items(Item *item_list, int size){

	for (int i = 0; i < size; i++){
		printf("----------Item %d----------\n", i); 
		printf("Name: %s\nCategory: %s\nSku: %s\nPrice: %f\n", item_list[i].name, item_list[i].category, item_list[i].sku, item_list[i].price);
	
	}

}


int main(){


	Item* item_list = (Item *) malloc(sizeof(Item) * 5);

	add_item(item_list, 5.99, "100100100", "Cereal", "Corn Flakes", 0);
	add_item(item_list, 6.99, "200200200", "Dairy", "Cheese", 1);
	add_item(item_list, 12.99, "300300300", "Beverage", "Cola", 2);
	add_item(item_list, 19.99, "400400400", "Electronics", "Hard Drive", 3);
	add_item(item_list, 8.99, "500500500", "Office Supplies", "Stapler", 4);

	print_items(item_list, 5);
	average_price(item_list, 5);
	
	return 0;
}


