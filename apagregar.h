void agregar(int *disponible,int *aux,int *cantidad)
{
    int r=0,art,i,des;
    while(r==0)
    {
        printf("QUE ARTICULO DESEA AGREGAR\n");
        if(scanf("%i",&art)!=0)
        {
            for(i=0;i<TAM;i++)
            {
                if(*(aux+i)==(art))
                {
                    printf("CUANTOS ARTICULOS?\n");
                    if (scanf("%i",&des)!=0)
                    {
                        if(des<=*(disponible+i))
                        {
                            *(disponible+i)-=des;
                            *(cantidad+i)+=des;
                        }
                    }
                }
            }
        }
        else{break;}
        printf("DESEA AGREGAR OTRO ARTICULO?\n(0)Si\t(1)No\n");
        if (scanf("%i",&r)!=0)
        {

        }
        else{break;}
    }
}


