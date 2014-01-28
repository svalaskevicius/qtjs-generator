#pragma once

#include <ffi.h>
#include <vector>

struct ClosureGenerator {

    ClosureGenerator() : initDone(false) {}

    ~ClosureGenerator() {
        for (auto c : allocatedClosures) {
            ffi_closure_free(c);
        }
        allocatedClosures.clear();
    }

protected:
    virtual void prepare_cif() = 0;
    ffi_cif cif;


    void *generateClosure(void (*fun)(ffi_cif*,void*,void**,void*), void *param) {

        if (!initDone) {
            prepare_cif();
            initDone = true;
        }

        void *ret;

        ffi_closure *closure = (ffi_closure *) ffi_closure_alloc(sizeof(ffi_closure), &ret);

        if (!closure) {
            throw new std::runtime_error("cannot allocate create into");
        }

        if (ffi_prep_closure_loc(closure, &cif, fun, param, ret) != FFI_OK) {
            throw new std::runtime_error("cannot bind create into");
        }

        allocatedClosures.push_back(closure);

        return ret;
    }

private:
    std::vector<ffi_closure *> allocatedClosures;
    bool initDone;

};
