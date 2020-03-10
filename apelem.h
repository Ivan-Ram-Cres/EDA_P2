void elementos(char titulo[][50],float *precio,int *aux,int *cantidad)
{
    int r=0,i;
    float total=0;
    for(i=0;i<TAM;i++)
    {
        if(*(cantidad+i)!=0)
        {
            printf("Num\tARTICULO\tCANTIDAD\tP.U.\tP.T\n");
            printf("%i\t%s\t%i\t%g\t%g\n",*(aux+i),(titulo+i),*(cantidad+i),*(precio+i),(*(precio+i))*(*(cantidad+i)));
            total=total+((*(precio+i))*(*(cantidad+i)));
        }
        //else{}
    }
    printf("TOTAL A PAGAR %g\n",total);
}
