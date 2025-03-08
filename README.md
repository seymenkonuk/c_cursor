# C Cursor
> C dilinde, imleç ile ilgili fonksiyonlar içeren kütüphane.

## Açıklama
Sunduğu özellikler:
- İmleci gizleme / gösterme
- İmlecin konumunu değiştirme
- İmlecin ve yazıların rengini değiştirme

## İçindekiler
<ol>
	<li>
		<a href="#başlangıç">Başlangıç</a>
		<ul>
			<li><a href="#bağımlılıklar">Bağımlılıklar</a></li>
			<li><a href="#kurulum">Kurulum</a></li>
			<li><a href="#yapılandırma">Yapılandırma</a></li>
			<li><a href="#derleme">Derleme</a></li>
			<li><a href="#çalıştırma">Çalıştırma</a></li>
		</ul>
	</li>
	<li><a href="#dizin-yapısı">Dizin Yapısı</a></li>
	<li><a href="#kullanım">Kullanım</a></li>
	<li><a href="#lisans">Lisans</a></li>
	<li><a href="#Iletişim">İletişim</a></li>
</ol>

## Başlangıç
### Bağımlılıklar
Proje aşağıdaki işletim sistemlerinde test edilmiştir:
- **Debian**

Projenin düzgün çalışabilmesi için aşağıdaki yazılımların sisteminizde kurulu olması gerekir:
- **C Derleyicisi** (GCC, Clang vb.)
- **Make** (Makefile kullanarak derlemek için)
- **Docker** (Docker kullanarak çalıştırmak için)

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

### Kurulum
1. Bu repository'yi kendi bilgisayarınıza klonlayın:
	```bash
	git clone https://github.com/seymenkonuk/c_cursor.git
	```

2. Projeye gidin:
	```bash
	cd c_cursor
	```

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

### Yapılandırma
Yapılandırılacak bir şey yok!

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

### Derleme

Kütüphane, **Makefile** üzerinden kolayca derlenebilir ve linklenebilir.

- **Projeyi derlemek için**:

	```bash
	make
	```

- **Projeyi temizlemek için**:

	```bash
	make clean
	```

Makefile, kütüphanenizi derleyecek ve `bin/libc_cursor.a` statik kütüphanesini oluşturacaktır.

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

### Çalıştırma
Kütüphaneyi kullanan basit bir programı (`test/test.c`) **Docker** üzerinden çalıştırabilirsiniz:
1. Make ve Docker'ı kurunuz.
2. Aşağıdaki komutu çalıştırınız:
	```bash
	make docker
	```

Kütüphaneyi kullanan basit bir programı (`test/test.c`) **Makefile** üzerinden çalıştırabilirsiniz:
1. Make'i kurunuz.
2. Aşağıdaki komutu çalıştırınız:
	```bash
	make test
	```

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

## Dizin Yapısı
```
├── c_cursor/
│   ├── bin/			#Derlenmiş dosyalar
│   ├── obj/			#Obj dosyaları
│   ├── src/			#Kaynak kodlar
│   └── test/			#Projeyi kullanan örnek program
```

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

## Kullanım
Kütüphaneyi kendi C projenizde kullanabilmek için aşağıdaki adımları izleyebilirsiniz:


1. **Kütüphaneyi derleyerek `libc_cursor.a` dosyasını elde edin.**

2. **libc_cursor.a dosyasını `/path/to` dizinine yerleştirin.**

3. **src dizini içindeki bütün .h dosyalarını `/path/to/include/c_cursor` dizinine yerleştirin.**

4. **Kütüphaneyi dahil edin**:

	`#include <c_cursor/c_cursor.h>` satırını, kullanmak istediğiniz C dosyasının başına ekleyin.

5. **Derleme sırasında kütüphaneyi linkleyin**:

	```bash
	gcc -o my_program my_program.c -L/path/to -lc_cursor -I/path/to/include
	```

	Burada `/path/to` dizini herhangi bir dizin olabilir.


<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

## Lisans
Bu proje [MIT Lisansı](https://github.com/seymenkonuk/c_cursor/blob/main/LICENSE) ile lisanslanmıştır.

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---

## Iletişim
Proje ile ilgili sorularınız veya önerileriniz için bana ulaşabilirsiniz:

GitHub: https://github.com/seymenkonuk

LinkedIn: https://www.linkedin.com/in/recep-seymen-konuk/

Proje Bağlantısı: [https://github.com/seymenkonuk/c_cursor](https://github.com/seymenkonuk/c_cursor)

<p align="right">(<a href="#c-cursor">back to top</a>)</p>

---
