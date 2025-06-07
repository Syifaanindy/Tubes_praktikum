#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>     
#include <conio.h>   
typedef struct{
    char id_pegawa[100];
    char nama_pegawai[100];
    int umur_pegawai;
    int no_hp;
    char alamat[100];
    int pendidikan;
    int golongan;
}pegawai;
typedef struct{
    char username[100];
    char password[100];
    char id_pegawai[100];
}akun;
typedef struct{
    char tanggal[100];
    int status_kehadiran;
    int jam_lembur;
    char id_pegawai;
}kehadiran;
typedef struct{
    int gaji;
    char id_pegawai[100];
}penggajian;

typedef struct{
    int kinerja;
    int produktivitas;
    int disiplin;
    int keteladanan;
}evaluasi;

int main(){
    
}