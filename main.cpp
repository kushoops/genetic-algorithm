#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <random>
#include <ctime>

/*
Gen 1 (113)
 
 Semester 1 (28)
 ARSITEKTUR KOMPUTER (A) Firza Prima Aditiawan, S.Kom, M.TI & Ardhon Rakhmadi, S.Tr.T., M.Kom
 ARSITEKTUR KOMPUTER (B) Firza Prima Aditiawan, S.Kom, M.TI
 ARSITEKTUR KOMPUTER (C) Firza Prima Aditiawan, S.Kom, M.TI & Ardhon Rakhmadi, S.Tr.T., M.Kom
 ARSITEKTUR KOMPUTER (C) Chrystia Aji Putra, S.Kom, M.T   & Andreas Nugroho S, S.Kom, M.Kom
 ARSITEKTUR KOMPUTER (E) Chrystia Aji Putra, S.Kom, M.T  & Andreas Nugroho S, S.Kom, M.Kom
 ARSITEKTUR KOMPUTER (F) Dr. Eng. Ir. Dwi Arman Prasetya, ST., MT., IPU
 ARSITEKTUR KOMPUTER (G) Dr. Eng. Ir. Dwi Arman Prasetya, ST., MT., IPU
 SISTEM & TEKNOLOGI INFORMASI (A) Made Hanindia Prami S, S.Kom, M.Cs
 SISTEM & TEKNOLOGI INFORMASI (B ) Henni Endah Wahanani, S.T, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 SISTEM & TEKNOLOGI INFORMASI (C ) Retno Mumpuni, S.Kom, M.Sc
 SISTEM & TEKNOLOGI INFORMASI (D) Made Hanindia Prami S, S.Kom, M.Cs
 SISTEM & TEKNOLOGI INFORMASI (E ) Henni Endah Wahanani, S.T, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 SISTEM & TEKNOLOGI INFORMASI (F ) Retno Mumpuni, S.Kom, M.Sc
 SISTEM & TEKNOLOGI INFORMASI (G) Afina Lina Nurlaili, S.Kom, M.Kom
 ETIKA & KOMPETENSI INFORMATIKA (A) Chrystia Aji Putra, S.Kom, M.T
 ETIKA & KOMPETENSI INFORMATIKA (B) Henni Endah Wahanani, S.T, M.Kom
 ETIKA & KOMPETENSI INFORMATIKA (C) Chrystia Aji Putra, S.Kom, M.T
 ETIKA & KOMPETENSI INFORMATIKA (D) Chrystia Aji Putra, S.Kom, M.T
 ETIKA & KOMPETENSI INFORMATIKA (E) Henni Endah Wahanani, S.T, M.Kom
 ETIKA & KOMPETENSI INFORMATIKA (F) Budi Nugroho, S.Kom, M.Kom
 ETIKA & KOMPETENSI INFORMATIKA (G) Henni Endah Wahanani, S.T, M.Kom
 MATEMATIKA KOMPUTASI (A) Agung Mustika Rizki, S.Kom, M.Kom
 MATEMATIKA KOMPUTASI (B) Agung Mustika Rizki, S.Kom, M.Kom  & Andreas Nugroho S, S.Kom, M.Kom
 MATEMATIKA KOMPUTASI (C) Eka Prakarsa Mandyartha, ST, M.Kom
 MATEMATIKA KOMPUTASI (D) Agung Mustika Rizki, S.Kom, M.Kom  & Andreas Nugroho S, S.Kom, M.Kom
 MATEMATIKA KOMPUTASI (E) Eka Prakarsa Mandyartha, ST, M.Kom & Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 MATEMATIKA KOMPUTASI (F) Eka Prakarsa Mandyartha, ST, M.Kom & Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 MATEMATIKA KOMPUTASI (G) Eka Prakarsa Mandyartha, ST, M.Kom
 
 Semester 3 (42)
 SISTEM OPERASI (A) Hendra Maulana, S.Kom, M.Kom & Andreas Nugroho S, S.Kom, M.Kom
 SISTEM OPERASI (B) Hendra Maulana, S.Kom, M.Kom & Andreas Nugroho S, S.Kom, M.Kom
 SISTEM OPERASI (C) Muhammad Muharrom A.H, S.Kom., M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 SISTEM OPERASI (D) Muhammad Muharrom A.H, S.Kom., M.Kom
 SISTEM OPERASI (E) Muhammad Muharrom A.H, S.Kom., M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 SISTEM OPERASI (F) Muhammad Muharrom A.H, S.Kom., M.Kom
 SISTEM OPERASI (G) Dr. Eng. Agussalim, S.PD, M.T
 METODE NUMERIK (A) Eva Yulia Puspaningrum, S.Kom, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 METODE NUMERIK (B) Yisti Vita Via, S.ST, M.Kom
 METODE NUMERIK (C) Dr. Ir. Kartini, S.Kom, MT
 METODE NUMERIK (D) Dr. Ir. Kartini, S.Kom, MT
 METODE NUMERIK (E) Eva Yulia Puspaningrum, S.Kom, M.Kom
 METODE NUMERIK (F) Yisti Vita Via, S.ST, M.Kom
 METODE NUMERIK (G) Eva Yulia Puspaningrum, S.Kom, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 STATISTIK KOMPUTASI (A) Yisti Vita Via, S.ST, M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 STATISTIK KOMPUTASI (B) Yisti Vita Via, S.ST, M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 STATISTIK KOMPUTASI (C) Dr. Eng. Ir. Anggraini Puspita Sari, MT
 STATISTIK KOMPUTASI (D) Dr. Eng. Ir. Anggraini Puspita Sari, MT
 STATISTIK KOMPUTASI (E) Dr. Ir. Kartini, S.Kom, MT
 STATISTIK KOMPUTASI (F) Yisti Vita Via, S.ST, M.Kom
 STATISTIK KOMPUTASI (G) Dr. Ir. Kartini, S.Kom, MT
 STRUKTUR DATA (A) Agung Mustika Rizki, S.Kom, M.Kom
 STRUKTUR DATA (B) Dr. Eng. Ir. Anggraini Puspita Sari, MT
 STRUKTUR DATA (C) Dr. Eng. Ir. Anggraini Puspita Sari, MT &  Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 STRUKTUR DATA (D) Dr. Eng. Ir. Anggraini Puspita Sari, MT &  Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 STRUKTUR DATA (E) Fawwaz Ali Akbar, S.Kom, M.Kom
 STRUKTUR DATA (F) Fawwaz Ali Akbar, S.Kom, M.Kom
 STRUKTUR DATA (G) Muhammad Muharrom A.H, S.Kom., M.Kom
 BASIS DATA LANJUT (A) Retno Mumpuni, S.Kom, M.Sc & Budi Mukhamad Mulyo, S.Kom., M.T.
 BASIS DATA LANJUT (B) Retno Mumpuni, S.Kom, M.Sc
 BASIS DATA LANJUT (C) Sugiarto, S.Kom, M.Kom
 BASIS DATA LANJUT (D) Sugiarto, S.Kom, M.Kom
 BASIS DATA LANJUT (E) Retno Mumpuni, S.Kom, M.Sc & Budi Mukhamad Mulyo, S.Kom., M.T.
 BASIS DATA LANJUT (F) Dr. Rr. Ani Dijah Rahajoe, S.T, M.Cs
 BASIS DATA LANJUT (G) Dr. Rr. Ani Dijah Rahajoe, S.T, M.Cs
 PEMROGRAMAN LANJUT (A) Wahyu Syaifullah J S, S.kom, M.Kom & Andreas Nugroho S, S.Kom, M.Kom
 PEMROGRAMAN LANJUT (B) Wahyu Syaifullah J S, S.kom, M.Kom
 PEMROGRAMAN LANJUT (C) Wahyu Syaifullah J S, S.kom, M.Kom & Andreas Nugroho S, S.Kom, M.Kom
 PEMROGRAMAN LANJUT (D) Fawwaz Ali Akbar, S.Kom, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 PEMROGRAMAN LANJUT (E) Agung Mustika Rizki, S.Kom, M.Kom
 PEMROGRAMAN LANJUT (F) Fawwaz Ali Akbar, S.Kom, M.Kom & Budi Mukhamad Mulyo, S.Kom., M.T.
 PEMROGRAMAN LANJUT (G) Fawwaz Ali Akbar, S.Kom, M.Kom
 
 Semester 5 (13)
 ANALISIS CITRA Hendra Maulana, S.Kom, M.Kom
 ANALISIS KEBUTUHAN Retno Mumpuni, S.Kom, M.Sc
 APLIKASI ERP Dr. I Gede Susrama, S.T, M.Kom
 APLIKASI MOBILE Muhammad Muharrom A.H, S.Kom., M.Kom
 CASE BASED REASONING Made Hanindia Prami S, S.Kom, M.Cs
 DATA MINING Eva Yulia Puspaningrum, S.Kom, M.Kom
 DESAIN MANAJEMEN JARINGAN Achmad Junaidi, S.Kom, M.Kom
 MACHINE LEARNING Agung Mustika Rizki, S.Kom, M.Kom
 MIKROKONTROLER Dr. Basuki Rahmat, S.Si, M.T
 PEMROGRAMAN FRAMEWORK Fawwaz Ali Akbar, S.Kom, M.Kom
 PEMROGRAMAN JARINGAN Achmad Junaidi, S.Kom, M.Kom
 SISTEM INFORMASI SPASIAL Dr. Rr. Ani Dijah Rahajoe, S.T, M.Cs
 TEKNIK OPTIMASI Yisti Vita Via, S.ST, M.Kom
 
 Semester 7 (30)
 RISET INFORMATIKA (A) Mohammad Idhom, S.P, S.Kom, M.T
 RISET INFORMATIKA (B) Dr. I Gede Susrama, S.T, M.Kom
 RISET INFORMATIKA (C) Dr. Basuki Rahmat, S.Si, M.T
 RISET INFORMATIKA (D) Dr. Basuki Rahmat, S.Si, M.T
 RISET INFORMATIKA (E) Mohammad Idhom, S.P, S.Kom, M.T
 RISET INFORMATIKA (F) Dr. I Gede Susrama, S.T, M.Kom
 PENGENALAN POLA (A) Fetty Tri Anggraeny, S.Kom, M.Kom
 PENGENALAN POLA (B) Achmad Junaidi, S.Kom, M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 PENGENALAN POLA (C) Fetty Tri Anggraeny, S.Kom, M.Kom
 PENGENALAN POLA (D) Achmad Junaidi, S.Kom, M.Kom & Ardhon Rakhmadi, S.Tr.T., M.Kom
 PENGENALAN POLA (E) Eka Prakarsa Mandyartha, ST, M.Kom
 PENGENALAN POLA (F) Eka Prakarsa Mandyartha, ST, M.Kom
 PENGOLAHN CITRA DIGITAL (A) Fetty Tri Anggraeny, S.Kom, M.Kom
 PENGOLAHN CITRA DIGITAL (B) Fetty Tri Anggraeny, S.Kom, M.Kom
 PENGOLAHN CITRA DIGITAL (C) Achmad Junaidi, S.Kom, M.Kom
 PENGOLAHN CITRA DIGITAL (D) Achmad Junaidi, S.Kom, M.Kom
 PENGOLAHN CITRA DIGITAL (E) Eva Yulia Puspaningrum, S.Kom, M.Kom
 PENGOLAHN CITRA DIGITAL (F) Eva Yulia Puspaningrum, S.Kom, M.Kom
 AUDIT IT (A) Firza Prima Aditiawan, S.Kom, M.TI
 AUDIT IT (B) Firza Prima Aditiawan, S.Kom, M.TI
 AUDIT IT (C) Firza Prima Aditiawan, S.Kom, M.TI
 AUDIT IT (D) Afina Lina Nurlaili, S.Kom, M.Kom  Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 AUDIT IT (E) Afina Lina Nurlaili, S.Kom, M.Kom & Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 AUDIT IT (F) Afina Lina Nurlaili, S.Kom, M.Kom
 MANAJEMEN PROYEK (A) Afina Lina Nurlaili, S.Kom, M.Kom
 MANAJEMEN PROYEK (B) Afina Lina Nurlaili, S.Kom, M.Kom
 MANAJEMEN PROYEK (C) Budi Nugroho, S.Kom, M.Kom & Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 MANAJEMEN PROYEK (D) Budi Nugroho, S.Kom, M.Kom
 MANAJEMEN PROYEK (E) Budi Nugroho, S.Kom, M.Kom
 MANAJEMEN PROYEK (F) Budi Nugroho, S.Kom, M.Kom & Hazna At Thooriqoh, S.Tr.Kom., M.Kom.
 
 Gen 2 (7)
 Gedung 2 R 101
 Gedung 2 R 205
 Gedung 2 R 301
 Gedung 2 R 302
 Gedung 2 R 303
 Gedung 1 R 303
 Gedung 1 R 305
 
 Gen 3 (18)
 SENIN 07.00 - 09.30
 SENIN 09.30 - 12.00
 SENIN 12.00 - 14.40
 SENIN 14.40 - 17.10
 SELASA 07.00 - 09.30
 SELASA 09.30 - 12.00
 SELASA 12.00 - 14.40
 SELASA 14.40 - 17.10
 RABU 07.00 - 09.30
 RABU 09.30 - 12.00
 RABU 12.00 - 14.40
 RABU 14.40 - 17.10
 KAMIS 07.00 - 09.30
 KAMIS 09.30 - 12.00
 KAMIS 12.00 - 14.40
 KAMIS 14.40 - 17.10
 JUM'AT 08.40 - 11.10
 JUM'AT 13.00 - 15.30
 
*/

#define N_GEN 3
#define N_GEN1 113
#define N_GEN2 7
#define N_GEN3 18
#define N_KROMOSOM 113
#define N_POPULATION 5

class Population {
private:
    int kromosom[N_KROMOSOM][N_GEN];
    float fitness;
    
public:
    Population() {
        this->setRandomKromosom();
        this->setFitness();
    }
    
    void setRandomKromosom() {
        for (int i=0; i<N_KROMOSOM; i++) {
            this->kromosom[i][0] = rand() % N_GEN1;
            this->kromosom[i][1] = rand() % N_GEN2;
            this->kromosom[i][2] = rand() % N_GEN3;
        }
    }
    
    void setFitness() {
        int crashGen=0, tmpCrashGen;
        
        for (int i=0; i<N_GEN1; i++) {
            tmpCrashGen=0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == this->kromosom[j][0]) tmpCrashGen++;
                if ((j == N_KROMOSOM-1) && (tmpCrashGen > 1)) crashGen += tmpCrashGen-1;
            }
        }
        
        for (int i=0; i<N_GEN2; i++) {
            tmpCrashGen = 0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == this->kromosom[j][1]) tmpCrashGen++;
                if ((i == this->kromosom[j][1]) && (tmpCrashGen > N_GEN3)) crashGen++;
            }
        }
        
        for (int i=0; i<N_GEN3; i++) {
            tmpCrashGen = 0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == this->kromosom[j][2]) tmpCrashGen++;
                if ((i == this->kromosom[j][2]) && (tmpCrashGen > N_GEN2)) crashGen++;
            }
        }
        
        for (int i=0; i<N_GEN3; i++) {
            for (int j=0; j<N_GEN2; j++) {
                tmpCrashGen = 0;
                for (int k=0; k<N_KROMOSOM; k++) {
                    if ((this->kromosom[k][2] == i) && (this->kromosom[k][1] == j)) tmpCrashGen++;
                    if (((this->kromosom[k][2] == i) && (this->kromosom[k][1] == j)) && (tmpCrashGen > 1)) crashGen++;
                }
            }
        }
        
        this->fitness = 1.0f / (1 + crashGen);
    }
    
    int(& getKromosom())[N_KROMOSOM][N_GEN] {return this->kromosom;}
    float getFitness() {return this->fitness;}
    
    static void crossover(Population* population1, Population* population2, int midIndex) {
        int tmpPopulation1[N_KROMOSOM][N_GEN], tmpPopulation2[N_KROMOSOM][N_GEN];
        
        for (int i=midIndex; i<N_KROMOSOM; i++) {
            tmpPopulation1[i][0] = population1->getKromosom()[i][0];
            tmpPopulation1[i][1] = population1->getKromosom()[i][1];
            tmpPopulation1[i][2] = population1->getKromosom()[i][2];
            tmpPopulation2[i][0] = population2->getKromosom()[i][0];
            tmpPopulation2[i][1] = population2->getKromosom()[i][1];
            tmpPopulation2[i][2] = population2->getKromosom()[i][2];
        }
        
        for (int i=midIndex; i<N_KROMOSOM; i++) {
            population1->kromosom[i][0] = tmpPopulation2[i][0];
            population1->kromosom[i][1] = tmpPopulation2[i][1];
            population1->kromosom[i][2] = tmpPopulation2[i][2];
            population2->kromosom[i][0] = tmpPopulation1[i][0];
            population2->kromosom[i][1] = tmpPopulation1[i][1];
            population2->kromosom[i][2] = tmpPopulation1[i][2];
        }
        population1->setFitness();
        population2->setFitness();
    }
    
    static void mutation(Population* population1, Population* population2) {
        int tmpCrashGen1, tmpCrashGen2;
        
        for (int i=0; i<N_GEN1; i++) {
            tmpCrashGen1=0; tmpCrashGen2=0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == population1->kromosom[j][0]) tmpCrashGen1++;
                if (i == population2->kromosom[j][0]) tmpCrashGen2++;
                if ((tmpCrashGen1 > 1) && (i == population1->kromosom[j][0])) population1->kromosom[j][0] = rand() % N_GEN1;
                if ((tmpCrashGen2 > 1) && (i == population2->kromosom[j][0])) population2->kromosom[j][0] = rand() % N_GEN1;
            }
        }
        
        for (int i=0; i<N_GEN2; i++) {
            tmpCrashGen1 = 0; tmpCrashGen2 = 0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == population1 ->kromosom[j][1]) tmpCrashGen1++;
                if (i == population2 ->kromosom[j][1]) tmpCrashGen2++;
                if ((i == population1 ->kromosom[j][1]) && (tmpCrashGen1 > N_GEN3)) population1->kromosom[j][1] = rand() % N_GEN2;
                if ((i == population2 ->kromosom[j][1]) && (tmpCrashGen2 > N_GEN3)) population2->kromosom[j][1] = rand() % N_GEN2;
            }
        }
        
        for (int i=0; i<N_GEN3; i++) {
            tmpCrashGen1 = 0; tmpCrashGen2 = 0;
            for (int j=0; j<N_KROMOSOM; j++) {
                if (i == population1->kromosom[j][2]) tmpCrashGen1++;
                if (i == population2->kromosom[j][2]) tmpCrashGen2++;
                if ((i == population1->kromosom[j][2]) && (tmpCrashGen1 > N_GEN2)) population1->kromosom[j][2] = rand() % N_GEN3;
                if ((i == population2->kromosom[j][2]) && (tmpCrashGen2 > N_GEN2)) population2->kromosom[j][2] = rand() % N_GEN3;
            }
        }
        
        for (int i=0; i<N_GEN3; i++) {
            for (int j=0; j<N_GEN2; j++) {
                tmpCrashGen1 = 0; tmpCrashGen2 = 0;
                for (int k=0; k<N_KROMOSOM; k++) {
                    if ((population1->kromosom[k][2] == i) && (population1->kromosom[k][1] == j)) tmpCrashGen1++;
                    if ((population2->kromosom[k][2] == i) && (population2->kromosom[k][1] == j)) tmpCrashGen2++;
                    if (((population1->kromosom[k][2] == i) && (population1->kromosom[k][1] == j)) && (tmpCrashGen1 > 1)) population1->kromosom[k][1] = rand() % N_GEN2;
                    if (((population2->kromosom[k][2] == i) && (population2->kromosom[k][1] == j)) && (tmpCrashGen2 > 1)) population2->kromosom[k][1] = rand() % N_GEN2;
                }
            }
        }
        population1->setFitness();
        population2->setFitness();
    }
};

static Population* population[N_POPULATION];

void sortPopulation() {
    Population* tmp = population[0];
    for (int i=0; i<N_POPULATION; i++)
        if (tmp->getFitness() < population[i]->getFitness()) tmp = population[i];
    
    auto ptr = std::find(population, population + 5, tmp);
    int indexBest = int(ptr - population);
    std::swap(population[N_POPULATION-1], population[indexBest]);
}

    void viewAllPopulation() {
        for (int p=0; p<N_POPULATION; p++) {
            for (int i=0; i<N_KROMOSOM; i++) {
                if (i == 0) std::cout << "{" << std::endl;
                for (int j=0; j<N_GEN; j++) {
                    if (j == 0) std::cout << "{";
                    std::cout << population[p]->getKromosom()[i][j];
                    if (j != N_GEN-1) std::cout << ",";
                    if (j == N_GEN-1) std::cout << "}";
                    if ((j == N_GEN-1) && (i!=N_KROMOSOM-1)) std::cout << ",\t";
                }
                if (((i+1) % 7) == 0) std::cout << std::endl;
                if (i == N_KROMOSOM-1) std::cout << std::endl << "}";
            }
            if (p != N_POPULATION-1) std::cout << "," << std::endl;
            else std::cout << std::endl;
        }
    }

void viewPopulation(Population* population) {
    int crashGen=0, tmpCrashGen;
    
//    for (int i=0; i<N_GEN1; i++) {
//        tmpCrashGen=0;
//        for (int j=0; j<N_KROMOSOM; j++) {
//            if (i == population->getKromosom()[j][0]) {
//                tmpCrashGen++;
//                std::cout << "{" << population->getKromosom()[j][0] << ", " << population->getKromosom()[j][1] << ", " << population->getKromosom()[j][2] << "} ";
//            }
//            if ((j == N_KROMOSOM-1) && (tmpCrashGen > 1)) crashGen += tmpCrashGen-1;
//        }
//        std::cout << std::endl;
//    }

    for (int i=0; i<N_GEN3; i++) {
        tmpCrashGen=0;
        for (int j=0; j<N_KROMOSOM; j++) {
            if (i == population->getKromosom()[j][2]) {
                tmpCrashGen++;
                std::cout << "{" << population->getKromosom()[j][0] << ", " << population->getKromosom()[j][1] << ", " << population->getKromosom()[j][2] << "} ";
            }
            if ((j == N_KROMOSOM-1) && (tmpCrashGen > 1)) crashGen += tmpCrashGen-1;
        }
        std::cout << std::endl;
    }
    
//    for (int i=0; i<N_GEN2; i++) {
//        tmpCrashGen=0;
//        for (int j=0; j<N_KROMOSOM; j++) {
//            if (i == population->getKromosom()[j][1]) {
//                tmpCrashGen++;
//                std::cout << "{" << population->getKromosom()[j][0] << ", " << population->getKromosom()[j][1] << ", " << population->getKromosom()[j][2] << "} ";
//            }
//            if ((j == N_KROMOSOM-1) && (tmpCrashGen > 1)) crashGen += tmpCrashGen-1;
//        }
//        std::cout << std::endl;
//    }
}
 
int main() {
    long timeStart=std::time(0);
    int generation=0, indexParent[2]={0,1};
    std::srand(unsigned(std::time(0)));
    
    //    Population
    for (int i=0; i<N_POPULATION; i++) population[i] = new Population();
//    static Population* child[2] = {population[0], population[1]};
    
    while (true) {
//        Selection (Elitist Selection & Binary Tournament)
        sortPopulation();
        int indexSelection[N_POPULATION-1] = {0, 1, 2, 3};
        std::default_random_engine rng(static_cast<unsigned>(std::time(0)));
        std::shuffle(indexSelection, indexSelection + N_POPULATION-1, rng);
        indexParent[0] = population[indexSelection[0]]->getFitness() > population[indexSelection[1]]->getFitness() ? indexSelection[0] : indexSelection[1];
        indexParent[1] = population[indexSelection[2]]->getFitness() > population[indexSelection[3]]->getFitness() ? indexSelection[2] : indexSelection[3];
        
//        Selection (Roulette Wheel)
//        sortPopulation();
//        float n = 0, indexSelection[N_POPULATION];
//        for (int i=0; i<N_POPULATION; i++) {
//            n += population[i]->getFitness();
//            indexSelection[i] = n;
//        }
//        float x;
//        for (int i=0; i<2; i++) {
//            x = rand();
//            while (true) {
//                if (x > n) x *= .1;
//                else break;
//            }
//            for (int j=0; j<N_POPULATION; j++) {
//                if (x < indexSelection[j]) {
//                    indexParent[i] = j;
//                    break;
//                }
//            }
//        }
        
//        Selection (Replacement)
//        std::swap(child[0], population[indexParent[0]]);
//        std::swap(child[1], population[indexParent[1]]);
//        sortPopulation();
//        std::swap(population[0], child[0]);
//        std::swap(population[1], child[1]);
//        indexParent[0] = rand() % N_POPULATION;
//        indexParent[1] = rand() % N_POPULATION;
//        child[0] = population[indexParent[0]];
//        child[1] = population[indexParent[1]];
        
        //    Crossover
        Population::crossover(population[indexParent[0]], population[indexParent[1]], int(rand() % 1));
        
        //    Mutation
        Population::mutation(population[indexParent[0]], population[indexParent[1]]);
        
//            Regeneration
        system("clear");
        std::cout << generation++ << ". " << population[N_POPULATION-1]->getFitness() << " " << population[indexParent[0]]->getFitness() << " " << population[indexParent[1]]->getFitness() << std::endl;
        if (population[N_POPULATION-1]->getFitness() == 1.0) {
            viewPopulation(population[N_POPULATION-1]);
            std::cout << std::time(0) - timeStart << " detik" << std::endl;
            break;
        }
    }
    
}
