require64;
sreg_t v = mmu.load_int64(RB);
mmu.store_uint64(RB, std::min(sreg_t(RA),v));
RC = v;