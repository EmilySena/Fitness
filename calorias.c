#include <stdio.h>
int main(){
  float calorias, idade, altura, peso, sexo, ativo;
  printf("Idade em anos:\n");
  scanf("%f",&idade);
  printf("Altura em cm:\n");
  scanf("%f", &altura);
  printf("Peso em kg:\n");
  scanf("%f", &peso);
  printf("Você é mulher, digite 1. E se for homem, digite 0.\n");
  scanf("%f", &sexo);
  if(sexo==1){
    calorias=(9.56*peso)+(1.85*altura)-(4.68*idade)+665;
  } else if(sexo==0){
    calorias=(13.75*peso)+(5*altura)-(6.76*idade)+66.5;
  }
  printf("Se você é sedentário (pouco ou nenhum exercício), digite 0\nSe você é levemente ativo (exercício leve 1 a 3 dias por semana), digite 1\nSe você é moderadamente ativo (pratica esportes 3 a 5 dias por semana), digite 2\nSe você é muito ativo (exercícios intensos de 5 a 6 dias por semana), digite 3\nSe você é extremamente ativo (exercícios intensos diariamente ou até 2 vezes por dia),digite 4\nDigite o seu nível de atividade física semanal:\n");
  scanf("%f", &ativo);
  if(ativo==0){
    calorias=calorias*1.2;
  }
  if(ativo==1){
    calorias=calorias*1.375;
  }
  if(ativo==2){
    calorias=calorias*1.55;
  }
  if(ativo==3){
    calorias=calorias*1.725;
  }
  if(ativo==4){
    calorias=calorias*1.9;
  }
  printf("Calorias necessárias por dia = %.2f\n", calorias);
  printf("Essa é sua taxa metabólica basal\n");
  float perder, kg;
  printf("Quer perder peso?\nSe sim, digite 1\nSe não, digite 0\n");
  scanf("%f", &perder);
  if(perder==1){
    printf("Quanto você quer perder por semana?\nPara perder 0.5kg, digite 0\nPara perder 1kg, digite 1\n");
    scanf("%f",&kg);
    if(kg==0){
      calorias=calorias-500;
      printf("Consumir %.2f calorias por dia\n", calorias);
    }else if(kg==1){
      calorias=calorias-1000;
      printf("Consumir %.2f calorias por dia\n", calorias);
    }
  }else{
    kg=0;
    return 0;
  }
  return 0;
}
