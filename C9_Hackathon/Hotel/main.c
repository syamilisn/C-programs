#include <stdio.h>
#include <string.h>
typedef char string[100];
typedef struct Food{
    int id;
    string name;
    float price;
    int group;
    int qty;
}dish;
static int primkey = 0;
static int count = 0;
dish menu[30];  //  To store dishes in menu
dish create_menu();
void write_menu(FILE*, dish*, int);
void display_menu(FILE*, int);
void save_data(int count, int primkey);
void reload_data(FILE *database, int *count, int *primkey);

/* MAIN FUNCTION STARTS */
void main(){ 
    printf("******HOTEL MANAGEMENT SYSTEM******\n");
    int choice;
    FILE *database = fopen("menu.txt", "r+");
    reload_data(database, &count, &primkey);
    printf("count = %d, primkey = %d", count, primkey);
    do{
        printf(">> Enter choice:\n1. create_menu, 2. display_menu, 3. reload_stats\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: {
                printf("choice 1: You have chosen to create menu.\n");
                menu[count++] = create_menu();
                break;
            }
            case 2: {
                printf("choice 2: You have chosen to display menu.\n");
                write_menu(database, menu, count);
                display_menu(database, count);
                break;
            }

            case 3: {
                printf("choice 3: Reloading stats from saved file.\n");
                reload_data(database, &count, &primkey);
                break;
            }
            
            default:{
                save_data(count, primkey);
                choice = 0;
                break;
            }
        }
        
    } while (choice != 0);
    fclose(database);
}

dish create_menu(){
    
    dish temp;
    temp.id = primkey++;
    temp.qty = 0;
    printf(">> Enter dish:\n<NAME> <PRICE> <GROUP>\n");
    scanf("%s%f%d", temp.name, &temp.price, &temp.group);
    return temp;
}
void write_menu(FILE *database, dish *menu, int count){
    for(int i=0; i<count; i++){
        printf("id-%d\t%s\t₹%.2f\t%d\t%d\n", menu[i].id, menu[i].name, menu[i].price, menu[i].group, menu[i].qty);
        fprintf(database, "%d\t%s\t%f\t%d\t%d\n", menu[i].id, menu[i].name, menu[i].price, menu[i].group, menu[i].qty);
    }
}
void display_menu(FILE *database, int count){
    // char ch;
    // while(1){
    //     ch = fgetc(database);
    //     if(ch == EOF)   break;
    //     printf("%c", ch);
    // }
    for(int i=0; i<count; i++){
        printf("%d %s %f %d %d\n", menu[i].id, menu[i].name, menu[i].price, menu[i].group, menu[i].qty);
    }
}
void save_data(int count, int primkey){
    FILE *stats = fopen("stats.txt", "w+");  //  +w: erases file contents and rewrites everytime
    // fprintf(stats, "Dish count : %d\n", count);  
    // fprintf(stats, "Primary Key: %d\n", primkey);
    fprintf(stats, "%d %d", count ,primkey);
    fclose(stats);
}

void reload_data(FILE *database, int *count, int *primkey){
    FILE* stats = fopen("stats.txt", "r");
    int i = 0;
    fscanf (stats, "%d", &i); 
    *count = i;
    fscanf (stats, "%d", &i); 
    *primkey = i;
    
    fclose(stats);

    dish temp;
    for( int i =0; i < *count; i++){
        fscanf (database, "%d%s%f%d%d", &temp.id, temp.name, &temp.price, &temp.group, &temp.qty);
        menu[i].id = temp.id;
        strcpy(menu[i].name, temp.name);
        menu[i].price = temp.price;
        menu[i].group = temp.group;
        menu[i].qty = temp.qty;
    }
}