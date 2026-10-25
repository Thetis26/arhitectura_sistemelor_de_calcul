package com.company;

public class Client {
    String nume;
    String email;
    String adresa;
    CreditCard card;

    public Client(String nume, String email, String adresa, CreditCard card) {
        this.nume = nume;
        this.email = email;
        this.adresa = adresa;
        this.card = card;
    }

    void afisareDetalii()
    {
        System.out.println("nume" +nume+ "email" +email+ "adresa" +adresa+ "card" +card);
    }
}
