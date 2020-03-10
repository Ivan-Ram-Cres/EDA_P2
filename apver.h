void ver(char titulo[][50],float *precio,int *disponible)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("Articulo [%i]\t",i+1);
        printf("%s\t",titulo+i);
        printf("Precio: $ %g\t",*(precio+i));
        printf("Disponible: %i\n",*(disponible+i));
    }
}
