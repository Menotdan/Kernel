#pragma once
#include <stdint.h>

namespace Firework::Cpu::Smp {
    bool wait_for_boot();
    void init();
    void boot_cpu(uint32_t lapic_id);
    void set_booted();
}  // namespace Firework::Cpu::Smp