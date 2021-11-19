class Bomba {
    unsigned int hatralevo_ido;

public:
    Bomba(int hatralevoIdo) : hatralevo_ido(hatralevoIdo) {}

    Bomba& operator--() {
        if (hatralevo_ido > 0) {
            hatralevo_ido--;
        }

        return *this;
    }

    Bomba operator--(int) {
        Bomba b = *this;
        operator--();
        return b;
    }

    bool felrobbant() const {
        return hatralevo_ido == 0;
    }
};
