##1.PROJE ÖZETİ
Bu projenin amacı görme engelli bireylerin daha bağımsız ve rahat bir şekilde yaşamlarını devam ettirmelerini sağlamaktır. Yapılan gözlemler neticesinde görme engelli bireylerin kullandıkları beyaz bastonların oldukça yetersiz ve verimsiz olduğu sonucuna varılmıştır. Bu problem üzerine yazılım ve donanımsal bilgiler kullanılarak bir çözüm üretilmeye çalışılmıştır. Çalışmalar sonucunda ortaya çıkaran prototip ürün, kemer formatında olup etrafına yerleştirilen kızılötesi sensörler sayesinde kullanıcıların daha rahat hareket etmelerini sağlamayı amaçlamaktadır. Kemerin çeşitli yerlerine yerleştirilen kızılötesi sensörler sayesinde etrafta bulunan cisimleri ve kullanılan algoritmalar sayesinde ise merdiven, tümsek ve çukurları rahatlıkla tespit edip kemerlerin içine yerleştirilen titreşim motorları ile kullanıcı uyarılmaktadır. 

##2. PROBLEM/SORU
Ülkemizdeki nüfus ve konut araştırması sonuçlarına göre, görmede zorluk yaşayan bireylerin nüfusa oranı %1,4(1.039.000 kişi)’tür[1]. Bu kişilerin çoğunluğu “beyaz baston” adı verilen uzun bir baston kullanmaktadır. Ancak bu bastonlar yalnızca kullanıcının önündeki engelleri tespit edebilmektedir. Bununla birlikte görme engelli bireylerin en büyük problemlerinden biri baş ve vücudun üst kısımlarına çarpan cisimlerdir. Bunlara ek olarak baston kullanılırken çevredeki insanlara da zarar verme tehlikesi vardır. Görme engelli bireylerden alınan dönütler üzerine özellikle yaşı küçük çocukların bu bastonları kullanmada büyük bir zorluk yaşadığı tespit edilmiştir. 
Bastonların kullanımındaki en büyük zorluklarından biri de bastonun ellerden birini sürekli meşgul etmesidir. 
Günümüz şartlarında sokakta oldukça fazla tehlike bulunmaktadır. Duyu organlarından birini kullanmamak hele ki görme duyusunu kullanamamak kişiyi oldukça dezavantajlı duruma düşürmektedir. Bu projede teknolojinin imkânlarını kullanarak görme engelli bireylerin hayatlarını kolaylaştırmak hedeflenmiştir.

##3. ÇÖZÜM
Belirtilen problemlerden yola çıkarak görme engelli bireylerin hareket kabiliyetini arttırmak için geliştirilen prototip üründe, kemer formatının pek çok yönden en verimli model olduğuna karar verilmiştir. 
![image](https://user-images.githubusercontent.com/89391171/181483438-b91b27ae-6961-4e2e-a5f4-8ce01e6bb137.png)

Şekil-1 Kemer Üzerinde Sensörlerin Yerleştirileceği Bölümler

Şekil-1 de X ile işaretli yerlere yerleştireceğimiz kızılötesi sensörler yardımıyla kullanıcı 700’ye kadar görüş açısı kazandırarak cisimleri tespit edebilecek böylece beyaz bastonlardan çok daha geniş bir açıyı eş zamanlı olarak tarayabilecektir. En arkadaki sensör ise arkadan yaklaşacak tehlikelere karşı kullanıcıyı uyaracaktır.




                                    Şekil-2 Sensörlerin Kemer Üzerinde Tarayacağı Alan



 
Şekil-3 Sensörlerin Aparat Üzerindeki Konumları

Şekil-1’de 1 numaralı bölgedeki sensörlerin aparat üzerindeki konumları verilmiştir. Bu görselde görüldüğü gibi karşıya ve aşağıya bakan kızılötesi sensörler sayesinde aşağıda kalan tümsek, çukur ve merdiven gibi engelleri tasarladığımız ürün saptayabilecektir. Yukarıya ve karşıya bakan kızılötesi sensörler sayesinde de ağaç, tabela, kapı eşiği gibi engeller saptanabilecektir. Yalnız karşıya bakan sensör sayesinde ise bu ürün doğrudan bir metre önündeki her türlü cismi algılayabilecektir. Sensörlerin arkasına yerleştireceğimiz titreşim motorları sayesinde de kullanıcı saptanan cisimleri fark edebilecektir.
4. YÖNTEM
Şekil-3’te görüldüğü gibi yerleştirilecek olan TCRT5000 model kızılötesi sensörler gönderdikleri kızılötesi ışınların cisimlere çarptıktan sonra yansıyıp dönmesinde geçen süreyi hesaplayıp yansıtıcı cismin ne kadar uzakta olduğu bilgisini vermektedir. [6] Tasarladığımız ürün, gelen bu bilgiyi arduino nano devre kartını kullanarak analiz edip, cismin uzaklığına göre kullanılan titreşim motorlarını belirli aralıklar ile titreştirerek kullanıcıya algılanan cisim ile arasındaki mesafe hakkında bilgi verecektir. Kullanılan algoritmalar sayesinde aşağı yönlü ve ileri yönlü kızılötesi sensörler, aynı anda belirlenen oranda veri gönderildiğinde sistem tarafından öndeki cismin bir engel olduğunu algılayacak ve engelin yönü doğrultusunda titreşim motorlarını çalıştırarak kullanıcıyı haberdar edecektir. Benzer bir şekilde yukarı ve ileri yönlü kızılötesi sensörler, alınan verilere göre titreşim motorlarını çalıştıracaktır. Doğrudan gelen engellerde ise titreşim motorlarının engelin yakınlığına göre titreşim sıklığı değiştirilerek kullanıcının engelin uzaklığını anlaması sağlanacaktır.






Görseli	Kompanent adı	Özellikleri
 	IR kızılötesi sensör
(TCRT 5000) [3]
2-100 cm arası görüş mesafesi ve 35˚ genişliğe sahiptir. 3,3V-5V gerilim ile çalışır.
 	Titreşim motor modülü [4]
Telefonlardakine benzer titreşim motoru, PWM pinleri ile kontrol edilebilir. 3V– 6V aralığında çalışabilir.
 	Arduino nano [5]
ATmega328 microdenetleyicisine sahip olan kart 5V çalışma gerilimine ve 7-12V (Limit 6-20V) besleme gerilimine sahiptir. 6 tanesi PWM olmak üzere 14 tane dijital pini ve 8 tane analog pini vardır. C++ yazılım dilini kullanan kart, pinler aracılığıyla veri giriş/çıkışı sağlayabilmektedir.
                                                                    (Tablo-1)

5. YENİLİKÇİ / İNOVATİF YÖNÜ
Projenin ilham kaynağı, okulumuza konferans için gelen görme engelli bir satranç oyuncusu idi. Onun konuşmasını dinledikten sonra etrafımızdaki görme engelli bireyleri daha dikkatli gözlemlemeye başladık. Gözlemlerimiz sonucunda görme engelli bireylerin kullandıkları beyaz baston ve benzerlerini kullanmakta oldukça zorlandıklarını fark ettik. Bu nedenle bu soruna çözüm arayan diğer çalışmaları inceledik. Benzer çalışmalara bakıldığında kullanılan beyaz bastonun üzerine yerleştirilen sensörler sayesinde baş hizasındaki engelleri tespit edip kullanıcıyı uyarmaya çalışan ürünler gördük. Ancak bu ürünlerin hem sopanın kullanımından doğan zorlukları hem de giderilmek istenen sorunları çözmede yetersiz kaldığını tespit ettik. 
Bunun üzerine sopa fikrini tamamen ortadan kaldırarak ellerin serbest olacağı şekilde geliştirilen ürünleri inceledik. Bu şekilde tasarlanmış olan ayakkabı ve şapka formatında ürünler bulduk ve bu ürünleri denediğimizde belirtilen sorunu çözmekte yetersiz kaldığını gördük. Örneğin şapkanın yine baston olmadan kullanılamayacağını fark ettik. Ayakkabının ise yine merdiven, çukur ve tabela gibi engelleri saptamada yetersiz olduğunu gördük. Ayrıca ayakkabının, ayağı büyümekte olan çocuklarda ekonomik olmaktan çıktığını ve sensörlerin temiz kalmasında zorluklar (toz, çamur vb.) oluşturacağını tespit ettik. Bizim amacımız ise bastonu tamamen ortadan kaldırmak ve 7’den 70’e herkesin yardıma muhtaç olmadan rahatlıkla hayatlarını sürdürebilmelerine yardımcı olmaktır.

6. UYGULANABİLİRLİK
İlk prototipi yaparken uygulanabilirliğin bir sorun olmadığını gördük. Tek sorunumuz kızılötesi sensörlerin nasıl açılı bir şekilde yerleştirileceği üzerine idi. Bu problemi ise Şekil 7’de görülen 3D yazıcı kullanarak üretmek üzere tasarladığımız aparat yolu ile çözmeyi planladık. Şekil 7’de görülen bu aparatları kemerde Şekil 1’de belirlenen yerlere yerleştireceğiz. Kemerin içinden geçireceğimiz kablolar aparat arduino nano kartına bağlanacaktır.
 
Şekil-7 3D Yazıcı ile Üretilen Aparat

 
Şekil-8 Tasarlanan Aparatın Kemer Üzerindeki Görüntüsü

Şekil-8’te ise tasarladığımız aparatın kemer üzerinde nasıl görüneceğini göstermektedir.

7. TAHMİNİ MALİYET VE PROJE ZAMAN PLANLAMASI
Ürün adı	Maliyeti
Arduino nano	220 ₺
Kızılötesi sensör (TCRT 5000)	10 adet * 8 ₺
Titreşim motoru	10 adet * 22 ₺
Bağlantı elemanları ve dış kasa	260 ₺
Toplam	780 ₺
                                                                           (Tablo-2)

                          Ay
    İş	Mayıs 	Haziran 	Temmuz 	Ağustos 	Eylül 
Literatür araştırması					
İkincil prototipin yapımı					
Yazılım ve donanım testleri					
Değerlendirme ve son testler					
Raporlama					
                                                                           (Tablo-3)

8. PROJENİN HEDEF KİTLESİ
Ülkemizde ve dünyada görme engelli bireylerin sayısı her geçen gün artıyor[2]. Bizim projemiz 7 yaştan itibaren her yaştan kullanıcıya hitap etmektedir. Bu yüzden de geniş bir hedef kitleye sahiptir.

9. RİSKLER
Risk	Çözüm
Cihazın kullanım anında pilinin bitmesi 	Yedek pil devreye girecektir ya da şarj edilebilir piller kullanılacaktır. 
Devre elemanlardan birinin gerekenden fazla amper çekip devreye zarar vermesi 	Kurulan sigorta devresi sayesinde devre korumaya alınır
                                                                          (Tablo-4)
10. PROJE EKİBİ
AD SOYAD	PROJEDEKİ GÖREVİ	OKULU
Yağız TUĞLU	Takım lideri, donanım ve yazılım sorumlusu	Osman Nuri Hekimoğlu Anadolu Lisesi
Mehmet Akif GÜLGEN	Yazılım sorumlusu	Osman Nuri Hekimoğlu Anadolu Lisesi
Neşe HAYTA
	Danışman öğretmen	Osman Nuri Hekimoğlu Anadolu Lisesi
                                                                          (Tablo-5)
Kaynakça
[1] https://www.aile.gov.tr/media/88684/eyhgm_istatistik_bulteni_temmuz2021.pdf Sayfa 8 tablo 1.2(7.05.22)
[2] https://www.aile.gov.tr/media/88684/eyhgm_istatistik_bulteni_temmuz2021.pdf Sayfa 10 tablo 2.1(8.05.22)
[3] https://www.robocombo.com/ir-kizilotesi-engelden-kacma-sensoru-modulu-arduino-akilli-arac-uyumlu (8.05.22)
[4] https://www.motorobit.com/urun/arduino-titresim-motoru-modulu (8.05.22)
[5] https://store.arduino.cc/products/arduino-nano-every-with-headers?variant=39496483831959 (8.05.22)
[6] http://eee.ktu.edu.tr/bitirme.dosyalar/bitirme_projeler_archive/04_2012-2013_Bahar/196097%20Esra%20YILMAZ/196097%20Esra%20YILMAZ.pdf (10.05.22)





