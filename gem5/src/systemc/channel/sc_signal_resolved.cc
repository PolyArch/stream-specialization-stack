/*
 * Copyright 2018 Google, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Gabe Black
 */

#include "base/logging.hh"
#include "systemc/ext/channel/sc_signal_resolved.hh"
#include "systemc/ext/core/sc_module.hh" // for sc_gen_unique_name

namespace sc_core
{

sc_signal_resolved::sc_signal_resolved() : sc_interface(),
        sc_signal<sc_dt::sc_logic, SC_MANY_WRITERS>(
                sc_gen_unique_name("signal_resolved"))
{}

sc_signal_resolved::sc_signal_resolved(const char *name) :
        sc_interface(), sc_signal<sc_dt::sc_logic, SC_MANY_WRITERS>(name)
{}

sc_signal_resolved::~sc_signal_resolved() {}

void
sc_signal_resolved::register_port(sc_port_base &, const char *)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

void
sc_signal_resolved::write(const sc_dt::sc_logic &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

sc_signal_resolved &
sc_signal_resolved::operator = (const sc_dt::sc_logic &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
    return *this;
}

sc_signal_resolved &
sc_signal_resolved::operator = (const sc_signal_resolved &)
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
    return *this;
}

const char *sc_signal_resolved::kind() const { return "sc_signal_resolved"; }

void
sc_signal_resolved::update()
{
    warn("%s not implemented.\n", __PRETTY_FUNCTION__);
}

} // namespace sc_core
