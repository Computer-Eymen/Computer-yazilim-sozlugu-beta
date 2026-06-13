#include <stdio.h>
#include <string.h>
#include <locale.h> // Sistem dilini ayarlamak için

int main() {
    // Terminale Türkçe karakter desteğini bu satırla zorunlu kılıyoruz
    setlocale(LC_ALL, "tr_TR.UTF-8");

     char secim[50];
     int ID = 0;

   printf("Lütfen bi yazılım kelimesi girin kelime girin(Not:Boşluk yerine '_' koyun ve yazılan kelimenin ingilizce olması lazım):\n");
   scanf("%49s",secim);

   if(strcmp(secim, "computer") == 0 || strcmp(secim, "Computer") == 0){
    ID = 1;
   }else if(strcmp(secim, "if") == 0 || strcmp(secim, "If") == 0){
    ID = 2;
   }else if(strcmp(secim, "else") == 0 || strcmp(secim, "Else") == 0){
    ID = 3;
   }else if(strcmp(secim, "else_if") == 0 || strcmp(secim, "Else_if") == 0 || strcmp(secim, "Else_İf") == 0){
    ID = 4;
   }else if(strcmp(secim, "result") == 0 || strcmp(secim, "Result") == 0){
    ID = 5;
   }else if(strcmp(secim, "developer") == 0 || strcmp(secim, "Developer") == 0){
    ID = 6;
   } else if(strcmp(secim, "python") == 0 || strcmp(secim, "Python") == 0){
    ID = 7;
   }else if(strcmp(secim, "source_code") == 0 || strcmp(secim, "Source_code") == 0 || strcmp(secim, "Source_Code") == 0){
    ID = 8;
   }else if(strcmp(secim, "bug") == 0 || strcmp(secim, "Bug") == 0){
    ID = 9;
   }else if(strcmp(secim, "open_source") == 0 || strcmp(secim, "Open_source ") == 0||strcmp(secim, "Open_Source_code") == 0 || strcmp(secim, "Open_Source_Code") == 0){
    ID = 10;
   }else if(strcmp(secim, "linux") == 0 || strcmp(secim, "Linux") == 0){
    ID = 11;
   }else if(strcmp(secim, "syntax") == 0 || strcmp(secim, "Syntax") == 0){
    ID = 12;
   }else if(strcmp(secim, "debugging") == 0 || strcmp(secim, "Debugging") == 0){
    ID = 13;
   }
  

switch(ID){

case 1:
    printf("Bilgisyarın kendisi");
    break;

case 2:
    printf("bunu karar opetörlerinin başında kullanırız if yazımp () parantez içine koşulu yazıp süslü parantez açıp koşulu yazarız");
    break;

case 3:
    printf("bunu karar opetörlerinin sonunda kullanırız if süslü parantesinin yanına else yazıp süslü parantez açıp koşulu yazarız");
    break;

case 4:
    printf("Bu uygulamanın yapımındada çok kullanılan kodlardan biridir iften sonra yazılır if süslü parantezinin yanına else if yazılıp parantez açılır koşul yazılır");
    break;

case 5:
    printf("sonuçtur genelde yazılılmda sonuç (result) değişkeni açılır ve işlem ona atanır");
    break;

case 6:
    printf("Geliştirici");
    break;

case 7:
    printf("Python bi programlama dilidir,veri işlemleri , yapay zekalarda çok sık kullanılırı ve dünyanın en kolay dilidir");
    break;

case 8:
    printf("kaynak kod bu yazılım dünyasının vazgeçilmezidir ve açık kaynak kültüründede çok kullanılır");
    break;

case 9:
    printf("bug yani Hata bu kavramı zaten biliyosundur buna yazılım dünyasında hata denir");
    break;

case 10:
    printf("açık kaynak kod bu tür cidden en önemli türlerderdin şuan kullandığın telefonun kodu açık kaynak kodlu android kullanıyor olabilir yani bu kodu isteyen görür isteyen değiştirip tekrar dağıtabilir");
    break;

case 11:
    printf("Linux açık kaynak kodlu bi işletim sistemidir, 1991 yılında Linus torvalds tarafından yazılan çekirdektir bugün 1000'in üzerinde dağıtımı bulunur ve yazılımcılar tarafından tercih edilir");
    break;

case 12:
    printf("Söz dizilimi yani bi programlama diline(python, java, C, C++) uygun kod yazma biçimidir.");
    break;

case 13:
    printf("Kodda bi hata bulma ve o hatayı çözme sürecine denir.");
    break;
default:
    printf("\nBu cümle sözlükte bulunmamaktadır.\n");
    break;
    
}



getchar();
getchar();
return 0;
}