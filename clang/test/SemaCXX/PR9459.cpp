// RUN: %clang_cc1 -fsyntax-only -verify %s

// Don't crash.

template<typename>struct ae_same;
template<typename>struct ts{}ap()
{ts<a>::ap<ae_same<int>::&ae_same<>>::p(a); }; // expected-error {{use of undeclared identifier 'a'}}
