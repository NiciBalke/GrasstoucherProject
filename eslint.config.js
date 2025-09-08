// eslint.config.js (CommonJS)
const { FlatCompat } = require("@eslint/eslintrc");

// Allows legacy .eslintrc.* files if you have them
const compat = new FlatCompat({
  baseDirectory: process.cwd(),
  recommended: true,
});

module.exports = [
  ...compat.extends("eslint:recommended"),
];