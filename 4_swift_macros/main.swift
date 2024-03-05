@freestanding(expression)
public macro stringify<T>(_ value: T) -> (T, String) = #externalMacro(module: "StringifyMacro", type: "StringifyMacro")

print(#stringify(1 + 3))
