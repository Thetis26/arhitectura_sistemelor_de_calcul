package com.company;

public class Produs {
    String nume;
    int pret;
    String descriere;

    public Produs(String nume, int pret, String descriere) {
        this.nume = nume;
        this.pret = pret;
        this.descriere= descriere;
    }

    @Override
    public String toString() {
        return "Produs{" +
                "nume='" + nume + '\'' +
                ", pret=" + pret +
                ", descriere='" + descriere + '\'' +
                '}';
    }
}
