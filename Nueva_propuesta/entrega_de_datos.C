#define entrega_de_datos_cxx

#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"
#include "TProof.h"

void entrega_de_datos(Long64_t entry_data)
{
    entry_data->Scan();
}