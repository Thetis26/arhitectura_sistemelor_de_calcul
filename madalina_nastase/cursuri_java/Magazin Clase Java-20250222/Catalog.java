package com.company;

import java.util.HashMap;
import java.util.Map;

public class Catalog {

    Map<String, Produs> produse = new HashMap<>();

    public Catalog() {
        Produs jucarie = new Produs("LEGO", 200, "Lego blocks");
        Produs jucarie1 = new Produs("Papusa",100,"Papusa Barbie");
        Produs aspirator = new Produs("Aspirator", 500, "Aspirator Karcher");
        Produs tofu = new Produs("Tofu",10,"Tofu cu ardei");

        produse.put(jucarie.nume, jucarie);
        produse.put(jucarie1.nume, jucarie1);
        produse.put(aspirator.nume, aspirator);
        produse.put(tofu.nume, tofu);
    }

    public String afisare() {
        String rezultat = "Catalog: {";
        for(Produs produs : produse.values()) {
            rezultat += "Produs: nume = " + produs.nume + '\n';
        }
        rezultat += " }";
        return rezultat;
    }

    Produs returneazaProdus(String nume) {
        return produse.get(nume);
    }
}
