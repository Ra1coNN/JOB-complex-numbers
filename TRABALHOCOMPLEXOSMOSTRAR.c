#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>

typedef struct
{
    float y,x,z;

} NUMEROS;

typedef struct
{
    float y,x;
} MyStructModulo;

typedef struct
{
    float j,l;
    float p,u;
    float n,m;
    float z,v;
    float t,e;
    float w,d;
} MyStructSoma;

typedef struct
{
    float t,e;
    float w,d;
} MyStructaux;

NUMEROS ler_numero()
{
    NUMEROS A;

    printf("Digite o Valor A:");
    scanf("%f", &A.y);
    printf("Digite o Valor B:");
    scanf("%f", &A.x);
    if(A.x > 0)
    {
        printf("\n%.1f+%.1fi", A.y, A.x);
        return A;
    }
    else
    {
        printf("\n%.1f%.1fi", A.y, A.x);
        return A;
    }
}

NUMEROS real_puro()
{
    NUMEROS B;

    printf("Digite o Valor A:");
    scanf("%f", &B.y);
    printf("Digite o Valor B:");
    scanf("%f", &B.x);
    if(B.x > 0)
    {
        printf("%.1f+%.1fi\n", B.y, B.x);
    }
    else
    {
        printf("\n%.1f%.1fi\n", B.y, B.x);
    }
    if(B.x == 0)
    {
        printf("\n\n%.1f+%.1fi\nSeu número é Real Puro", B.y, B.x);
        return B;
    }
    else
    {
        printf("\n\n%.1f+%.1fi\nSeu número NÃO é Real Puro", B.y, B.x);
        return B;
    }


}

NUMEROS imaginario_puro()
{
    NUMEROS C;

    printf("Digite o Valor A:");
    scanf("%f", &C.y);
    printf("Digite o Valor B:");
    scanf("%f", &C.x);
    if(C.x > 0)
    {
        printf("\n%.1f+%.1fi\n", C.y, C.x);
    }
    else
    {
        printf("\n%.1f%.1fi\n", C.y, C.x);
    }
    if(C.y == 0)
    {
        printf("\n\n%.1f+%.1fi\nSeu número é Imaginário Puro", C.y, C.x);
        return C;
    }
    else
    {
        printf("\n\n%.1f+%.1fi\nSeu número NÃO é Imaginário Puro", C.y, C.x);
        return C;
    }


}

NUMEROS numeros_iguais()
{
    NUMEROS D;

    printf("Digite o Valor A:");
    scanf("%f", &D.y);
    printf("Digite o Valor B:");
    scanf("%f", &D.x);
    if(D.x > 0)
    {
        printf("\n%.1f+%.1fi\n", D.y, D.x);
    }
    else
    {
        printf("\n%.1f%.1fi\n", D.y, D.x);
    }
    if(D.x == D.y)
    {
        printf("\n%.1f+%.1fi\nNúmeros são Iguais!", D.y, D.x);
        return D;
    }
    else
    {
        printf("\n%.1f+%.1fi\nNúmeros NÃO são Iguais!", D.y, D.x);
        return D;
    }


}

NUMEROS conjulgado()
{
    NUMEROS E;
    printf("Digite o Valor A:");
    scanf("%f", &E.y);
    printf("Digite o Valor B:");
    scanf("%f", &E.x);
    if(E.x > 0)
    {
        printf("\n%.1f+%.1fi\n", E.y, E.x);
        printf("Conjugado\n%.1f%.1fi", E.y, (-1)*E.x);
        return E;
    }
    else
    {
        printf("\n%.1f%.1fi\n", E.y, E.x);
        printf("\n%.1f+%.1fi\n", E.y, (-1)*E.x);
        return E;
    }



}
float modulo()
{
    MyStructModulo f;
    float raiz;

    printf("Digite o Valor A:");
    scanf("%f", &f.y);
    printf("Digite o Valor B:");
    scanf("%f", &f.x);

    f.y=f.y*f.y;
    f.x=f.x*f.x;
    raiz=f.y+f.x;

    printf("\n%lf", sqrt(raiz));

    return raiz;



}
NUMEROS somar()
{
    MyStructSoma G1;
    NUMEROS G;

    printf("Digite o Valor A:");
    scanf("%f", &G1.j);
    printf("Digite o Valor B:");
    scanf("%f", &G1.l);
    printf("\nComplexo a ser somado\n");
    printf("Digite o Valor A:");
    scanf("%f", &G1.p);
    printf("Digite o Valor B:");
    scanf("%f", &G1.u);

    G1.j=G1.j+G1.p;
    G.x=G1.j;
    G1.l=G1.l+G1.u;
    G.y=G1.l;

    if(G.y > 0)
    {
        printf("\n%.1f+%.1fi", G.x, G.y);
        return G;
    }
    else
    {
        printf("\n%.1f%.1fi", G.x, G.y);
        return G;
    }




}
NUMEROS subtracao()
{
    MyStructSoma G2;
    NUMEROS H;

    printf("Digite o Valor A:");
    scanf("%f", &G2.j);
    printf("Digite o Valor B:");
    scanf("%f", &G2.l);
    printf("\nComplexo a ser Subtraido\n");
    printf("Digite o Valor A:");
    scanf("%f", &G2.p);
    printf("Digite o Valor B:");
    scanf("%f", &G2.u);

    G2.j=G2.j-1*(G2.p);
    H.x=G2.j;
    G2.l=G2.l-1*(G2.u);
    H.y=G2.l;

    if(H.y > 0)
    {
        printf("\n%.1f+%.1fi", H.x, H.y);
        return H;
    }
    else
    {
        printf("\n%.1f%.1fi", H.x, H.y);
        return H;
    }




}

NUMEROS multiplicacao()
{
    MyStructSoma G2,G3,G4;
    NUMEROS I;

    printf("Digite o Valor A:");
    scanf("%f", &G2.j);
    printf("Digite o Valor B:");
    scanf("%f", &G2.l);
    printf("\nComplexo a ser Multiplicado\n");
    printf("Digite o Valor A:");
    scanf("%f", &G2.p);
    printf("Digite o Valor B:");
    scanf("%f", &G2.u);

    G3.n=G2.j*G2.p;
    G3.m=G2.j*G2.u;
    G4.z=G2.l*G2.p;
    G4.v=G2.l*G2.u;
    G4.v=G4.v*(-1);
    I.x=G3.n+G4.v;
    I.y=G3.m+G4.z;

    if(I.y > 0)
    {
        printf("\n%.1f + %.1fi", I.x, I.y);
        return I;
    }
    else
    {
        printf("\n%.1f%.1fi", I.x, I.y);
        return I;
    }




}
NUMEROS divisao()
{
    MyStructSoma G2,G3,G4, G7, G8;
    MyStructaux G5Conju, G6Conju, G11, G12;
    NUMEROS J;


    printf("Digite o Valor A:");
    scanf("%f", &G2.j);
    printf("Digite o Valor B:");
    scanf("%f", &G2.l);
    printf("\nComplexo a ser Dividido\n");
    printf("Digite o Valor A:");
    scanf("%f", &G2.p);
    printf("Digite o Valor B:");
    scanf("%f", &G2.u);

    G5Conju.t=G2.p;
    G6Conju.e=(-1)*G2.u;

    G3.n=G2.j*G5Conju.t;
    G3.m=G2.j*G6Conju.e;
    G4.z=G2.l*G5Conju.t;
    G4.v=G2.l*G6Conju.e;
    G7.t=G2.p*G5Conju.t;
    G7.e=G2.p*G6Conju.e;
    G8.w=G2.u*G5Conju.t;
    G8.d=G2.u*G6Conju.e;
    G4.v=G4.v*(-1);
    G8.d=G8.d*(-1);
    G11.d=G4.z+G3.m;
    G11.e=G7.e+G8.w;
    G12.d=G3.n+G4.v;
    G12.e=G7.t+G8.d;


    J.x=G12.d;
    J.z=G11.d;
    J.y=G7.t+G7.e+G8.w+G8.d;

    printf("\n%.1f/%.1f%.1fi/%.1f ", J.x, J.y, J.z, J.y);
    return J;




}



int main()
{
    setlocale( LC_ALL, "Portuguese" );

    NUMEROS a;
    NUMEROS b;
    NUMEROS c;
    NUMEROS d;
    NUMEROS e;
    float f;
    NUMEROS g;
    NUMEROS h;
    NUMEROS i;
    NUMEROS j;

    int opcao=0;

    while(opcao==0)
    {

        printf("---------- MENU ----------\n\n");

        printf("-----Escolha as opcções-----\n\n 1.LER NÚMERO COMPLEXO\n 2.REAL PURO\n 3.REAL IMAGINÁRIO\n 4.NÚMEROS IGUAIS\n 5.CONJULGADO\n 6.MODULO\n 7.SOMAR NÚMEROS COMPLEXOS\n 8.SUBTRAÇÃO\n 9.MULTIPLICAÇÃO\n 10.DIVISÃO\n");
        scanf("%d", &opcao);
        system("cls");
        if(opcao>10)
        {
            printf("\n\nOpção ínvalida Tente novamente\n\n");
            opcao=0;
            system("cls");
        }


        while(opcao==1)
        {
            a=ler_numero();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [1] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }

        while(opcao==2)
        {
            b=real_puro();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [2] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==3)
        {
            c=imaginario_puro();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [3] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==4)
        {
            d=numeros_iguais();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [4] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==5)
        {
            e=conjulgado();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [5] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==6)
        {
            f=modulo();

            printf("\nSeu Modulo");

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [6] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==7)
        {
            g=somar();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [7] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==8)
        {
            h=subtracao();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [8] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==9)
        {
            i=multiplicacao();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [9] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        while(opcao==10)
        {
            j=divisao();

            printf("\n\n");

            printf("Realizar operação novamente DIGITE [10] Para voltar ao Menu [0]");
            scanf("%d", &opcao);

            system("cls");
        }
        system("cls");
    }

}





