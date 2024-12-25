import XCTest
import SwiftTreeSitter
import TreeSitterGaptst

final class TreeSitterGaptstTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gaptst())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading gaptst grammar")
    }
}
