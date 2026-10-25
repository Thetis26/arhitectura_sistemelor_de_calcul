package com.company;

import java.util.ArrayList;
import java.util.List;

public class CosDeCumparaturi {

    List<Produs> produse;

    public CosDeCumparaturi() {
        produse = new ArrayList<>();
    }

    void adaugaProdus(Produs produs) {
        produse.add(produs);
    }

    int totalProduse(){
        int total = 0;
        for (Produs produs : produse) {
            total += produs.pret;
        }
        return total;
    }

}
