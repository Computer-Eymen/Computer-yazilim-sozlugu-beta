#include <stdio.h>
#include <string.h>
#include <locale.h> // Sistem dilini ayarlamak için

int main() {
	
	// Terminale Türkçe karakter desteğini bu satırla zorunlu kılıyoruz
    setlocale(LC_ALL, "tr_TR.UTF-8");
   
   char mod_secimi;
   
   printf("Mod seçimi\n");
   printf("1. Çevirici\n 2.Yazılıma başlama önerisi");
   printf("Başlamak istediğiniz modun numarasını girin\n --> ");
   scanf(" %c",&mod_secimi);
   
   if(mod_secimi == '1'){
	   
	   
	   
	  

     char secim[50]; //girilcek kelimenin max miktarını ayarlıyoz
     char Cont;//ingilizcede contiune yani devam kelimesinin kısaltımı
    do{
    int ID = 0;//ID yı bi çöp veriler ile karşılaşmamak için şuanlık 0 yaptık
     
//kelime isteme
   printf("Lütfen bi yazılım kelimesi girin kelime girin(Not:Boşluk yerine '_' koyun ve yazılan kelimenin ingilizce olması lazım):\n");
   printf("--> ");
   scanf("%49s",secim);
//çevirme işlemleri ve ID atanması
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
   }else if(strcmp(secim, "compiler") == 0 || strcmp(secim, "Compiler") == 0){
    ID = 14;
   }else if (strcmp(secim, "framework") == 0 || strcmp(secim, "Framework") == 0){
    ID = 15;  
   }else if (strcmp(secim, "database") == 0 || strcmp(secim, "Database") == 0){
    ID = 16;
   }else if(strcmp(secim, "API") == 0){
    ID = 17;
   }else if(strcmp(secim, "repository") == 0 || strcmp(secim, "Repository") == 0){
    ID = 18;
   }else if(strcmp(secim, "varible") == 0 || strcmp(secim, "Varible") == 0){
	ID = 19;   
   }else if(strcmp(secim, "malware") == 0 || strcmp(secim, "Malware") == 0){
	ID = 20;   
   }else if(strcmp(secim, "localhost") == 0 || strcmp(secim, "Localhost") == 0){   
	ID = 21;
   }else if(strcmp(secim, "c") == 0 || strcmp(secim,"C") == 0){
	ID = 22;   
   }else if(strcmp(secim, "c++") == 0 || strcmp(secim, "C++") == 0){
    ID = 23;
   }else if(strcmp(secim, "c#") == 0 || strcmp(secim, "C#") == 0){
    ID = 24;
   }else if(strcmp(secim, "beta") == 0 || strcmp(secim, "Beta") == 0){
    ID = 25;  
   } 
   
//IDye göre Ekrana bilgilerin yazdırılması
switch(ID){

case 1:
    printf("Bilgisyarın kendisi\n");
    break;

case 2:
    printf("bunu karar opetörlerinin başında kullanırız if yazımp () parantez içine koşulu yazıp süslü parantez açıp koşulu yazarız\n");
    break;

case 3:
    printf("bunu karar opetörlerinin sonunda kullanırız if süslü parantesinin yanına else yazıp süslü parantez açıp koşulu yazarız\n");
    break;

case 4:
    printf("Bu uygulamanın yapımındada çok kullanılan kodlardan biridir iften sonra yazılır if süslü parantezinin yanına else if yazılıp parantez açılır koşul yazılır\n");
    break;

case 5:
    printf("sonuçtur genelde yazılılmda sonuç (result) değişkeni açılır ve işlem ona atanır\n");
    break;

case 6:
    printf("Geliştirici");
    break;

case 7:
    printf("Python bi programlama dilidir,veri işlemleri , yapay zekalarda çok sık kullanılırı ve dünyanın en kolay dilidir\n");
    break;

case 8:
    printf("kaynak kod bu yazılım dünyasının vazgeçilmezidir ve açık kaynak kültüründede çok kullanılır\n");
    break;

case 9:
    printf("bug yani Hata bu kavramı zaten biliyosundur buna yazılım dünyasında hata denir\n");
    break;

case 10:
    printf("açık kaynak kod bu tür cidden en önemli türlerderdin şuan kullandığın telefonun kodu açık kaynak kodlu android kullanıyor olabilir yani bu kodu isteyen görür isteyen değiştirip tekrar dağıtabilir\n");
    break;

case 11:
    printf("Linux açık kaynak kodlu bi işletim sistemidir, 1991 yılında Linus torvalds tarafından yazılan çekirdektir bugün 1000'in üzerinde dağıtımı bulunur ve yazılımcılar tarafından tercih edilir\n");
    break;

case 12:
    printf("Söz dizilimi yani bi programlama diline(python, java, C, C++) uygun kod yazma biçimidir.\n");
    break;

case 13:
    printf("Kodda bi hata bulma ve o hatayı çözme sürecine denir.\n");
    break;

case 14:
    printf("Compiler (Derleyici): Yazılan kaynak kodu, bilgisayarın anlayabileceği makine diline çeviren programdır.\n");
    break;

case 15:
    printf("Framework (İskelet/Çatı): Yazılım geliştirmeyi hızlandıran, önceden hazırlanmış kod kütüphaneleri ve kurallar bütünüdür.\n");
    break;

case 16:
    printf("Database (Veritabanı): Uygulamaya ait verilerin düzenli, güvenli ve hızlı erişilebilir şekilde depolandığı sistemdir.\n");
    break;

case 17:
    printf("API (Application Programming Interface yani Uygulama Programlama Arayüzü): İki farklı yazılımın veya uygulamanın birbiriyle veri alışverişi yapmasını sağlayan arayüzdür.\n");
    break;
    
case 18:
    printf("Repository (Repo / Depo): Projenin tüm kod dosyalarının ve geçmiş sürümlerinin saklandığı dijital alandır.\n");
    break;
    
case 19:
   printf("Değişken (Variable): Kod içinde verileri geçici olarak saklamak için kullanılan hafıza alanlarıdır. Her değişken için ramde farklı bi alan ayrılır.\n");
   break;
   
case 20:
   printf("Malware: Bilgisayarlara zarar vermek için tasarlanmış tüm kötü amaçlı yazılımların genel adıdır.\n");
   break;
   
case 21:
    printf("Localhost yani Türkçesiyle yerel ağ kendi ağnızıdır yani modeminize bağlı her cihaz sizin yerel ağınızdadır.\n");
    break;
    
case 22:
    printf("C dili 1985 yılında çıkmış bi yazılım dilidir adını taban aldığı B dilinden alır. Normalde unix işletim sistemini yazmak için tasarlanan C günümüzde çoğu sektörde kullanılır\n");
    break;
    
case 23:
   printf("C++ normalde C diline bi eklenti olarak çıkmış olup sonra bağımsız bi dil olan C++ C dilinin daha kolay ve Nesne yönelimli (OPP) yazılım dilidir.");
   break;
   
case 24:
   printf("2000 yılında Microsoft tarafından geliştirilen bi dildir,genelde unity ile oyun yapımımda kullanılsada visual stdio gibi bazi kod yazma araçlarıda bu dille yazılmıştır");
   break;
   
case 25: 
   printf("Yazılım geliştirmede genel kullanıma sunulmadan önce test edilen ikinci sürüm aşaması.");
   break;   
    


default:
    printf("\nBu cümle sözlükte bulunmamaktadır.\n");
    break;
    
   
}
//Tekrar mı diye sorma
printf("\nTekrar denemek ister misiniz? (E/h)\n");
printf("--> ");
scanf(" %c",&Cont);
} while(Cont == 'E' || Cont == 'e');//eğer seçim 'E' veya 'h' ise en başa döner
//eğer seçim 'h' ise burası çalışcak 
printf("Uygulama kapanıyor iyi günler.\n");
printf("Uygulamayı kapatmak için enter tuşuna basın");
}else if(mod_secimi == '2'){
	
	 char dil[20];
	 char contiue;
	 do{
		 
    printf("Lütfen bi yazılım dili yazın (Tüm harfleri küçük olsun): ");
	 scanf(" %s",dil);
	 
	 
	 if(strcmp(dil, "python") == 0){
		printf("Yazılıma Başlamak için en iyi tercihtir ve en kolay dillerden birisidir. veri analizi, yapay zeka, web, siber güvenlik gibi alanlarda çokça kullanılır. "); 
    }else if(strcmp(dil, "javascript") == 0){
		printf("Yazılıma başlamak için iyidir. web sitesi geliştirmek isteyenler için harika bi dildir. ");
	}else if(strcmp(dil, "c") == 0){
	    printf("Eğer Ben yazılımın temelinden öğrenmek istiyom derseniz C ile başlarsınız genelde performans isteyen sistemlerde kullanılır ve bugün ki çoğu yazılım dilinin atasıdır.");	
	}else if(strcmp(dil, "c++") == 0){
		printf("C dilinin nesne yonelimli halidir. Oyun motorlari (Unreal Engine), yuksek performansli sistemler ve tarayicilar icin bicilmis kaftandir. Zordur ama C ailseinde(C,C++,C#) en kolay dillerinden birisidir\n");
    }else if( strcmp(dil,"c#") == 0){
		printf("Ben C ailesiyle(C,C++,C#) başlacam diyenler için en basit dillerden birisidir,genelde oyun ve web geliştirme ve microsoft geliştirdiği bi dil olduğu için windowsa tam uyumlu uygulamalar yazılabilir.");
	}else if(strcmp(dil, "java") == 0){
		printf("Genelde kurumsal uygulamalarda kullanılır ve hemen hemen C dili ile aynı mentıkla çalışır sadece javada nesle yönelimli bi yazılım dilidir.Ve bu dil ile yazılıma başlanabilir.");
	}else if(strcmp(dil, "rust") == 0){
		printf("Sistem programlama, tarayıcı motorları, kripto para / blockchain altyapıları, yüksek güvenlik gerektiren performans işlerinde kullanılır. bu dille yazılıma başlanmaz.Nedeni: Her ne kadar C++'a bi alternetif olarak çımış olsada öğrenmesi çok diktir ve deneyimli yazılımcıların geçiş yaptığı bi dildir.");
	}else if(strcmp(dil, "swift") == 0){
		printf("Bu dil ile yazılıma başlanabilir ama bu dili kullanmak için bi mac cihaza sahip olmanız ve bu dil ile sadece apple cihazlara uygulama yapılabildiğini unutmayın.");
	}else if(strcmp(dil, "kotlin")){
		printf("eğer Hedefimiz sadece android ise evet kotlin ile başlamak mantıklıdır.");
	}else{
		printf("Bu dil listede yok!");
	}
	
	printf("\nTekrar denemek ister misiniz? (E/h)\n--> ");
	scanf(" %c",&contiue);
	
	}while(contiue == 'E' || contiue == 'e');
	
	printf("Program kapanıyo iyi günler!");
	printf("kapatmak için enter tuşuna basın");
	 
	 
   

}else{
	printf("Geçersiz sayı girdiniz ");
}

getchar();
getchar();
return 0;
}
