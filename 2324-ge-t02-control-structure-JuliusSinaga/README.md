[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/V8Yted5d)
## Control Structure

Pada sesi ini anda diminta untuk menyelesaikan sebuah persoalan percabangan sederhana, dan sebuah persoalan kombinasi antara percabangan dan perulangan.


### Task 01: Next Three Months (score: 40pts; file : t02_01.c)
Tuliskan sebuah program yang akan membaca sebuah masukan dari ```stdin``` berupa bilangan bulat ```x```| ```x = {1, 2, 3, ..., 12}```. ```x``` adalah representasi dari bulan dalam satu tahun kalender. Nilai ```1``` merepresentasikan bulan ```January```, nilai ```2``` merepresentasikan bulan ```February```, dst.

Berdasarkan nilai ```x``` tuliskan tiga nama bulan dimulai dari bulan yang direpresentasikan oleh nilai masukan. Setiap nama bulan dituliskan dalam satu baris keluaran ke ```stdout```. Sebagai contoh, jika nilai masukan, ```x```, adalah ```3``` maka program akan memberikan keluaran sebagai berikut.
```
March
April
May

```

Jika berdasarkan nilai masukan jumlah bulan dalam setahun kurang dari tiga buah, maka diulang ke bulan awal. Harap diperhatikan, karena terjadi perlintasan tahun maka di antara keluaran bulan terakhir (```December```) dan bulan awal (```January```) diselipkan keluaran ```New year```. Sebagai contoh, jika masukan ```x``` adalah ```11```, maka program akan memberikan keluaran sebagai berikut.
```
November
December
New year
January

```

### Task 02: Donat Emejing (score: 30pts; file : t02_02.c)
Ucok dan Butet adalah sahabat sahabat sejati, bak kepompong dan kupu-kupu. Ucok dan Butet sama-sama pecinta donat, jajanan murah meriah yang cihuy di lidah.

Sabtu lalu, sebuah toko spesialis menjual donat baru saja buka, "Donat Emejing". Karena donat jualannya enak, toko tersebut selalu ramai dikunjungi pelanggan terutama di sore hari. Karena penasaran dan tak ingin ketinggalan, Ucok dan Butet kemudian mengunjungi toko donat tersebut di pagi hari untuk menghindari "persaingan". Sesampainya di toko donat, Ucok dan Butet seolah tak percaya dengan apa yang mereka lihat, hati mereka berbunga-bunga karena melihat berbagai varian donat yang begitu rupa.

Dalam melayani pelanggan, "Donat Emejing" mewajibkan setiap pelanggan untuk mengantre dengan rapi. Pelanggan dilayani satu per satu. Setiap pelanggan hanya diizinkan melakukan satu transaksi dalam satu waktu. Setiap transaksi hanya diperbolehkan paling banyak membeli tiga buah donat varian apapun. Pelanggan dapat membeli kembali dengan mengulang antrean. Untuk melayani satu transaksi pembelian diperlukan waktu tepat 3 menit. Ucok dan Butetpun mengantre.

Karena masih pagi, maka benar saja hanya Ucok dan Butet pelanggan toko. Dalam antrean Ucok selalu mendahului Butet. Ucok ingin membeli 4 buah donat sementara Butet ingin membeli 7 buah donat. Dengan menerapkan aturan toko maka Ucok dan Butet tak cukup mengantre satu kali. Ucok harus mengantre 2 kali sementara Butet harus 3 kali. Antrean Ucok (U) dan Butet (B) dapat diilustrasikan sebagai berikut.
```
U-B-U-B-B
```

Jika dihitung waktu tunggu yang harus dilalui, maka waktu tunggu Ucok adalah 9 menit, sementara Butet memerlukan 15 menit, dan total waktu tunggu mereka adalah 24 menit.

Tugas anda adalah mengembangkan sebuah program yang men-simulasi antrean di toko donat tersebut sehingga dapat dihitung waktu tunggu yang diperlukan Ucok dan Butet. Program akan membaca dua buah nilai numerik (```x1```, ```x2```) dari ```stdin``` yang masing-masing merepresentasikan jumlah donat yang ingin dibeli Ucok dan Butet. Jika tidak membeli, maka tidak perlu mengantre. Program kemudian akan menampilkan tiga baris keluaran ke ```stdout```, baris pertama adalah lama waktu tunggu Ucok, baris kedua adalah lama waktu tunggu Butet, dan baris ketiga adalah kombinasi lama waktu tunggu keduanya. Sebagai contoh, jika Ucok ingin membeli 4 buah donat dan Butet ingin membeli 5 buah donat maka program akan menampilkan keluaran sebagai berikut.
```
9
15
24

```

### Task 03: Counting Time Scheduling (score: 30pts; file t02_03.c)
Setelah menghitung jumlah hari yang terbuang sia-sia, kemudian Sialogo ingin membuat sebuah refleksi dari hasil evaluasi tersebut. Dia ingin memberikan sebuah suggestion kepada mereka yang sudah paham akan pentingnya waktu tersebut. Sehingga, dikemudian hari mereka bisa menggunakan waktu seoptimal mungkin. Berikut ilustrasinya:
Jika jumlah hari yang terbuang lebih banyak atau sama dengan jumlah hari yang digunakan, maka dia akan membuat weekly schedule sesuai dengan yang dia minati 2 kali lipat dari weekly schedule sebelumnya. Jika jumlah hari yang terbuang lebih kecil dari jumlah hari yang digunakan, maka dia akan membuat weekly schedule sesuai dengan yang sebelumnya.
Kita asumsikan dia istirahat belajar 1jam sekali setiap 5 jam dan hari minggu adalah libur.
<br>
**Input** :
```
Lama sekolah(satuan tahun)
Start sekolah
Agama
Jumlah hari yang dia gunakan dengan baik
Normal jam belajar

```

**Output**
```
Lama waktu yang terbuang sia-sia
List weekly schedule

```
### Example
**Input**
```
12
SD
Kristen
2000
6

```

**Output**
```
3396
Senin – 08.00-22.00
Selasa – 08.00-22.00
Rabu – 08.00-22.00
Kamis – 08.00-22.00
Jumat – 08.00-22.00
Sabtu – 08.00-22.00

```



## Submission
1. t02_01.c
2. t02_02.c
3. t02_03.c
4. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
