// eslint.config.js
import { FlatCompat } from "@eslint/eslintrc";

// Allows legacy .eslintrc.* files if you have them
const compat = new FlatCompat({
    baseDirectory: process.cwd(),
    recommended: true,
});

export default [
    ...compat.extends("eslint:recommended"),
];