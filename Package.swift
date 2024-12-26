// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGaptst",
    defaultLocalization: "en",
    products: [
        .library(name: "TreeSitterGaptst", targets: ["TreeSitterGaptst"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(name: "TreeSitterGaptst",
                dependencies: [],
                path: ".",
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGaptstTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGaptst",
            ],
            path: "bindings/swift/TreeSitterGaptstTests"
        )
    ],
    cLanguageStandard: .c11
)
