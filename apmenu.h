
int menu()
{
    char titulo[TAM][50]={"The Smiths-Meat is Murder","Fallout New Vegas","Bioshock Infinite","Tokio Blues-Murakami","Clash the truth-Beach Fossils"};
    float precio[TAM]={130,190,140,150,120};
    int disponible[TAM]={10,10,10,10,10};
    int aux[TAM]={1,2,3,4,5};
    int cantidad[TAM]={0,0,0,0,0};
    int opc,r=0;
    void ver(char titulo[][50],float *precio,int *disponible);
    void agregar(int *disponible,int *aux,int *cantidad);
    void elementos(char titulo[][50],float *precio,int *aux,int *cantidad);
    void elim(int *disponible,int *aux,int *cantidad);
    while(r==0)
    {
        printf("\tBIENVENIDO\n");
        printf("(1)VER CATALOGO\n(2)AGREGAR ELEMENTO\n(3)VER ELEMNTOS EN EL CARRITO\n(4)ELIMINAR ELEMENTO\n");
        printf("(5)SALIR\n");
        if((scanf("%i",&opc))!=1)
        {
           break;
        }
        else
        {
            switch (opc)
            {
                case 1:
                    ver(titulo,precio,disponible);
                break;
                case 2:
                    agregar(disponible,aux,cantidad);

                break;
                case 3:
                    elementos(titulo,precio,aux,cantidad);

                break;
                case 4:
                    elim(disponible,aux,cantidad);
                break;
                case 5:
                    r=1;
                    return 0;
                break;
                default:
                break;
            }
        }
    }
}
