#ifndef MODULEEXECUTOR_HPP
#define MODULEEXECUTOR_HPP

#include "llvm/IR/Module.h"

#include <memory>

class ModuleProcessor {

    std::unique_ptr<llvm::Module> module;

  public:
    ModuleProcessor(std::unique_ptr<llvm::Module> module)
      : module(std::move(module)) {}

    void print() const;
    void optimize();

    [[nodiscard]] bool verify() const;
    [[nodiscard]] int compile() const;
    [[nodiscard]] int execute() const;
};

#endif
