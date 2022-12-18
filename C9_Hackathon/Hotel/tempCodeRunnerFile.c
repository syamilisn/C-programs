    float price;
    int group;
    int qty;
}dish;
static int primkey = 0;
static int count = 0;
dish create_menu();
void write_menu(FILE*, dish*, int);
void display_menu(FILE*, int);
void save_data(int count, int primkey);
void reload_data(FILE *database, int *count, int *primkey);

/* MAIN FUNCTION STARTS */
void main(){ 
    printf("******HOTEL MANAGEMENT SYSTEM******\n");
    int choice;
    FILE *database = fopen("menu.txt", "a+");
    dish menu[30];  //  To store dishes in menu
    reload_data(database, &count, &primkey);

    do{
        printf(">> Enter choice:\n1. create_menu, 2. display_menu, 3. reload_stats\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: {