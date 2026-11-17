#include <stdio.h>
#include <NKLogger/NkLog.h>

int somme(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    nkentseu::NkLog::Initialize("Ani1071");

    int n = 10;
    logger.Info("Demarrage du calcul pour n = {0}", n);

    if (n > 5) {
        logger.Warn("n = {0} est grand, le calcul peut etre long", n);
    }

    int total = somme(n);
    logger.Info("Somme de 1 a {0} calculee : {1}", n, total);

    printf("Somme = %d\n", total);
    printf("Moyenne = %.2f\n", (double)total / n);
    printf("Carre = %d\n", total * total);

    if (total % 2 != 0) {
        logger.Error("Le total {0} est impair, resultat inattendu", total);
    }

    logger.Debug("Valeur interne de total = {0}", total);
    logger.Info("Fin du programme");

    nkentseu::NkLog::Shutdown();
    return 0;
}
