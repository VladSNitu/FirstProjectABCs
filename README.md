# FirstProjectABCs
Bandă de sortare pe culori.
### I.Descriere
Acesta este un proiect DIY de sortare automată a obiectelor pe culori folosind Arduino. Sistemul detectează obiectele care trec pe o bandă, o opresc și apoi detectează culorile fiecărui obiect.


### II.Componente
- Arduino UNO
- releu
- motor DC 5V
- Senzor de culori:
  - fotorezistor
  - modul led RGB
- 3 led-uri de culori:
  - Roșu
  - Albastru
  - Verde


### III.Funcționalitate
1. Este o aplicație care încearcă să simuleze o bandă industrială.
2. Motorul învârte o bandă până când senzorul HC-SRO4 detectează un obiect.
3. Banda se oprește, și apoi începe ciclul de detectare a culorii.
4. Modulul RGB aprinde fiecare culoare pe rând pentru un anumit interval de timp, citind intensitatea luminii după fiecare aprindere cu ajutorul fotorezistorului 
5. Microcontroller-ul afiseaza culoarea obiectului și apoi îi permite benzii să meargă mai departe.


### IV.Posibilități de extindere
- Se pot detecta 6 culori
- Se poate integra cu alte subansamble
- etc.


### V.Observații
***bold + italic*** Proiectul integrează conceptul de joined files pentru a rula programul. Este gândit special pentru integrarea de viitoare subansambluri.


### VII.fotografii cu el![WhatsApp Image 2025-11-21 at 21 14 21](https://github.com/user-attachments/assets/11f4bf5a-ab66-4e90-a900-e28a9b435dd1)




