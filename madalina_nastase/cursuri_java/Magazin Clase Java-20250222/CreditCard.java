package com.company;

public class CreditCard {

    public long numar;

    public CreditCard(long numar) {
        this.numar = numar;
    }

    public void plateste(int suma) {
        System.out.println("Am platit " + suma + " lei");
    }

    @Override
    public String toString() {
        return "CreditCard{" +
                "numar=" + numar +
                '}';
    }
}
