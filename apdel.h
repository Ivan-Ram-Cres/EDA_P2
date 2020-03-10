void elim(int *disponible,int *aux,int *cantidad)
{
    int r=0,del,i,art;
    while(r==0)
    {
        printf("QUE ELEMENTO QUIERE ELIMINAR\n");
        if (scanf("%i",&art)!=0)
        {
            for(i=0;i<TAM;i++)
            {
                if(*(aux+i)==art)
                {
                    printf("CUANTOS ARTICULOS?\n");
                    if (scanf("%i",&del)!=0)
                    {
                        if(del<=*(cantidad+i))
                        {
                            *(disponible+i)+=del;
                            *(cantidad+i)-=del;
                        }
                    }
                }
            }
        }
        else{break;}
        printf("DESEA ELIMINAR OTRO ARTICULO?\n(0)Si\t(1)No\n");
        if (scanf("%i",&r)!=0)
        {
        }
        else{break;}
    }
}
